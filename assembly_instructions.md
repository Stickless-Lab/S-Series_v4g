# DISCLAMER

⚠️⚠️ **I DO NOT RECOMMEND ACTUALLY BUILDING THIS CAR YOURSELF.**

This is my latest design, but it honestly isn’t that good. There are better cars to print and build.

If you’re seeing this 1–2 years from now (2026), check my GitHub profile and I’ll likely have a much better car available. ⚠️⚠️


# Assembly Instructions

This is not a full step-by-step guide on how to assemble the car. I will explain the main things you need to do, and you should be able to figure out most of it as you go. It is honestly not that hard.

I highly recommend downloading the Fusion assembly file [here](cad/S-Series_v4.3g.f3z) and opening it in Fusion, which is free to use. This file shows the full assembly, so you can clearly see where every part needs to go.

## Purchase the items

Make sure you have all the required items before starting the build. Everything needed for this project can be found in the [BOM.csv](BOM.csv).

You will also need a screw kit with screws ranging from M3 to M5, and lengths from around 6 mm to 40 mm. The exact screw count will be revealed later when the project is completely done, but a kit similar to [this one](https://www.amazon.com.be/-/nl/KOXXIAMOQ-verzonken-schroeven-moeren-sluitringen/dp/B0CJ6LCV9W/ref=sr_1_3?sr=8-3) should be good. I apologize for that and the next project I'll make will have that. For screws that might come lose use the Hex Nylon Insert Nuts you bought.

## 3D print the parts

Next, 3D print all the required parts.

Print the parts  [here](https://github.com/Stickless-Lab/S-Series_v4g/tree/main/cad).
In that folder you will see 2 folders, 1 with PETG parts and 1 with PLA parts, print those in the right material.

## Assembly

Once you have all the printed parts, bought components, and screws in front of you, open the `.f3z` file and use it as a reference for where everything goes.

There are no fixed instructions like “use this exact screw here and that exact screw there.” I apologize for that, but in most places you can just use the screw size and length that fits best. As long as the screw fits and holds the part properly, it should be fine.

For most parts, it also does not matter too much if the screw sticks out a little. I had that in a few places too.

## Wiring

Wire all electronics together.

You do not need a soldering iron for this project. All wiring instructions can be found in this folder:

[pcb](https://github.com/Stickless-Lab/S-Series_v4g/blob/main/pcb/README.md)

## Powering the Car On and Off

When turning the car on:

1. Turn on the transmitter first.
2. Connect the XT60 cable splitter to the battery so the car powers on.

When turning the car off:

1. Disconnect the XT60 cable splitter from the battery.
2. Turn off the transmitter.

After this, your car should be ready to use.

Thank you, and have fun driving!
