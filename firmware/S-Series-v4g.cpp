#include <ESP32Servo.h>

const int RX_STEERING_PIN = 32;
const int RX_THROTTLE_PIN = 33;

const int ESC_1_PIN = 18;
const int ESC_2_PIN = 19;
const int SERVO_PIN = 21;

const int PWM_MIN = 1000;
const int PWM_CENTER = 1500;
const int PWM_MAX = 2000;

const int RX_VALID_MIN = 750;
const int RX_VALID_MAX = 2250;

const int THROTTLE_STOP_POINT = 1500;
const int THROTTLE_FULL_POINT = 2000;

const int ESC_STOP_US = 1000;
const int ESC_MAX_US = 1200;

const int ARM_TIME_MS = 3000;

bool REVERSE_STEERING = false;

bool NORMAL_CAR_MODE = true;

bool USE_SERVO_STEERING = true;

const unsigned long SIGNAL_TIMEOUT_US = 30000;

int currentEsc1 = ESC_STOP_US;
int currentEsc2 = ESC_STOP_US;

Servo esc1;
Servo esc2;
Servo steeringServo;

void setup() {
  Serial.begin(115200);
  delay(200);

  pinMode(RX_STEERING_PIN, INPUT);
  pinMode(RX_THROTTLE_PIN, INPUT);

  esc1.setPeriodHertz(50);
  esc2.setPeriodHertz(50);
  steeringServo.setPeriodHertz(50);

  esc1.attach(ESC_1_PIN, PWM_MIN, PWM_MAX);
  esc2.attach(ESC_2_PIN, PWM_MIN, PWM_MAX);
  steeringServo.attach(SERVO_PIN, PWM_MIN, PWM_MAX);

  currentEsc1 = ESC_STOP_US;
  currentEsc2 = ESC_STOP_US;
  writeBothEscs(currentEsc1, currentEsc2);

  steeringServo.writeMicroseconds(PWM_CENTER);

  armEscs();

  Serial.println("RC ESP32 controller ready");
}

void loop() {
  int steeringIn = readRcChannel(RX_STEERING_PIN);
  int throttleIn = readRcChannel(RX_THROTTLE_PIN);

  if (steeringIn == 0 || throttleIn == 0) {
    stopCar();
    Serial.println("Signal lost - failsafe");
    delay(20);
    return;
  }

  steeringIn = constrain(steeringIn, PWM_MIN, PWM_MAX);
  throttleIn = constrain(throttleIn, PWM_MIN, PWM_MAX);

  if (REVERSE_STEERING) {
    steeringIn = reversePulse(steeringIn);
  }

  if (USE_SERVO_STEERING) {
    steeringServo.writeMicroseconds(steeringIn);
  }

  int throttle = throttleToEsc(throttleIn);

  int steering = steeringIn - PWM_CENTER;

  int esc1Out;
  int esc2Out;

  if (NORMAL_CAR_MODE) {
    esc1Out = throttle;
    esc2Out = throttle;
  } else {
    esc1Out = throttle + steering;
    esc2Out = throttle - steering;
  }

  esc1Out = constrain(esc1Out, ESC_STOP_US, ESC_MAX_US);
  esc2Out = constrain(esc2Out, ESC_STOP_US, ESC_MAX_US);

  currentEsc1 = esc1Out;
  currentEsc2 = esc2Out;

  writeBothEscs(currentEsc1, currentEsc2);

  Serial.print("Steering: ");
  Serial.print(steeringIn);
  Serial.print(" | Throttle RX: ");
  Serial.print(throttleIn);
  Serial.print(" | ESC1: ");
  Serial.print(esc1Out);
  Serial.print(" | ESC2: ");
  Serial.println(esc2Out);

  delay(20);
}

int throttleToEsc(int throttleIn) {
  if (throttleIn <= THROTTLE_STOP_POINT) {
    return ESC_STOP_US;
  }

  if (throttleIn >= THROTTLE_FULL_POINT) {
    return ESC_MAX_US;
  }

  return map(
    throttleIn,
    THROTTLE_STOP_POINT,
    THROTTLE_FULL_POINT,
    ESC_STOP_US,
    ESC_MAX_US
  );
}

void armEscs() {
  Serial.println("Arming ESCs at stop throttle...");

  currentEsc1 = ESC_STOP_US;
  currentEsc2 = ESC_STOP_US;

  writeBothEscs(currentEsc1, currentEsc2);
  steeringServo.writeMicroseconds(PWM_CENTER);

  delay(ARM_TIME_MS);

  Serial.println("ESCs armed");
}

void writeBothEscs(int us1, int us2) {
  esc1.writeMicroseconds(us1);
  esc2.writeMicroseconds(us2);
}

int readRcChannel(int pin) {
  unsigned long pulse = pulseIn(pin, HIGH, SIGNAL_TIMEOUT_US);

  if (pulse == 0) {
    return 0;
  }

  if (pulse < RX_VALID_MIN || pulse > RX_VALID_MAX) {
    return 0;
  }

  if (pulse < PWM_MIN) {
    pulse = PWM_MIN;
  }

  if (pulse > PWM_MAX) {
    pulse = PWM_MAX;
  }

  return (int)pulse;
}

int reversePulse(int pulse) {
  return PWM_MIN + PWM_MAX - pulse;
}

void stopCar() {
  currentEsc1 = ESC_STOP_US;
  currentEsc2 = ESC_STOP_US;

  writeBothEscs(currentEsc1, currentEsc2);
  steeringServo.writeMicroseconds(PWM_CENTER);
}
