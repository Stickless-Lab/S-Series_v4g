# Stickless — Project Journal

Chronological order: oldest to newest.

Images are linked to the original [Macondo project](https://macondo.hackclub.com/projects/9981). They require an internet connection to display.

## June 17, 2026

### Gear Meshing

**Time spent:** 0.5h

I wasted over half an hour meshing 2 gears together, I knew this would be a massive struggle. But of course chatGPTs first calculation was correct I was just somehow doing it wrong?

Anyways I did it and that's all that matters

![Gear Meshing — image 1](https://cdn.hackclub.com/019ed751-9213-75b0-ba1f-26b1c1f9e50d/image.png)

### Gear Attached to Motor

**Time spent:** 0.2h

I know I'm making very short and awkward journal entries right now but I have to study so here is what I've done.

I've made a motor where the dimensions are based on the sellers page and added the gear to the motors shaft.

![Gear Attached to Motor — image 1](https://cdn.hackclub.com/019ed6e0-2628-7d06-8ff0-b64e2e240436/image.png)

### Parts Research

**Time spent:** 0.2h

I researched what parts I need and I landed on this:

Brushless Inrunner Motor 3660 3100KV 3.175mm

https://nl.aliexpress.com/item/1005009726646547.html?spm=a2g0o.cart.0.0.3bad61d7EUZDWY&mp=1&gatewayAdapt=glo2nld

Bidirectional 100A ESC

https://nl.aliexpress.com/item/1005008362023140.html?spm=a2g0o.cart.0.0.167e61d74Bzq0t&mp=1&pdp_ext_f={"cart2PdpParams"%3A{"pdpBusinessMode"%3A"retail"}}&gatewayAdapt=glo2nld

![Parts Research — image 1](https://cdn.hackclub.com/019ed6cf-0002-7a69-86b6-bef38f225f47/image.png)

### 3 Required Gears

**Time spent:** 0.3h

These are the 3 required gears for the 1:6 gear ratio. I had to do this twice because I forgot to add backlash. I also test printed 2 small gears without backlash, even tho it worked great I added backlash anyway so I'd save myself from a potential future headache.

![3 Required Gears — image 1](https://cdn.hackclub.com/019ed693-9c0c-7a52-a2fb-ab0ff2add429/image.png)

![3 Required Gears — image 2](https://cdn.hackclub.com/019ed695-58e2-7a31-9499-10aeb8ef0a3e/image.png)

### Made A Herringbone test gear + research

**Time spent:** 1h

The 2 most important things in this version is a drive train and a more rigid body, especially where the suspension is. This is to increase strength, speed and reliability.

For the drive train I will connect a herringbone gear from a ~3000kv motor with a 1:6 gear ratio.

It will not go directly from 16T to 96T but rather 16T input → 32T / 16T compound shaft → 48T output

![Made A Herringbone test gear + research — image 1](https://cdn.hackclub.com/019ed5dd-2849-7284-af24-620cf7b2b212/image.png)

## June 18, 2026

### Drive Axle

**Time spent:** 1.2h

#### Research
It was actually quite the journey to get here, the main problem here was the overthinking 😅

I first looked at some YouTube videos, I came across one really promising one. The Tarmo5, which is also an open source RC car. Now it's drive axle was a very well designed axle that's almost fully 3d printed, keyword, almost. It had ball bearings which I didn't really like and therefore I finally tried to use my own brain and I'm not really the creative type.

I came up with a very simplistic design as you can see in the image, it only consists of 2 parts. It's so simple that there's probably a reason no one has designed it like this before...

#### Big Mistake
I was mid way typing this and realized there is a reason no one designed it like this before. Now Idk how to explain it but I'll try my best. The main goal is to allow the shaft free movement on the Z-axis while stay rotating freely to spin the wheel. Now the problem was when I turned I also turned the part that restricted it to the Z-axis, so for example if I turned the axle 90 degrees it wouldn't be restricted to the Z-axis anymore but rather the the X-axis and that is obviously a problem.

![Drive Axle — image 1](https://cdn.hackclub.com/019edb38-8ee9-72f3-87b0-941def6ed96e/image.png)

### Added the third gear

**Time spent:** 0.2h

Added the final gear that will eventually be connected to the wheels. This was much easier then last time since I know how to do it now.

![Added the third gear — image 1](https://cdn.hackclub.com/019edae5-d5a3-772b-8fc1-211c6835cc3d/image.png)

### Drive Axle

**Time spent:** 1.2h

#### Research
It was actually quite the journey to get here, the main problem here was the overthinking 😅

I first looked at some YouTube videos, I came across one really promising one. The Tarmo5, which is also an open source RC car. Now it's drive axle was a very well designed axle that's almost fully 3d printed, keyword, almost. It had ball bearings which I didn't really like and therefore I finally tried to use my own brain and I'm not really the creative type.

I came up with a very simplistic design as you can see in the image, it only consists of 2 parts. It's so simple that there's probably a reason no one has designed it like this before...

I'm stupid
I was mid way typing this and realized there is a reason no one designed it like this before. Now Idk how to explain it but I'll try my best. The main goal is to allow the shaft free movement on the Z-axis while stay rotating freely to spin the wheel. Now the problem was when I turned I also turned the part that restricted it to the Z-axis, so for example if I turned the axle 90 degrees it wouldn't be restricted to the Z-axis anymore but rather the the X-axis and that is obviously a problem.



![Drive Axle — image 1](https://cdn.hackclub.com/019edb38-8ee9-72f3-87b0-941def6ed96e/image.png)

## June 19, 2026

### Drive Axle 3

**Time spent:** 2.5h

#### Progress
So I've made a huge amount of progress, but it's not done yet and making this has been very hard and stressful and that combined with 35°C and sweaty hands making assembly stressful which gives me even sweatier hands which makes it even more stressful and the cycle continues

It's not perfect yet and definitely needs a redesign but I feel like I've made progress. The main 2 problems is that I don't have any bearing balls which makes testing slightly harder, now I'm just using 3d printed balls but we all know why that's not a real solution. The second problem is that assembly is impossible, for some reason I can't get it assembled now this might also be slightly bc of my sweaty hands but also definitely the design. The open source design has the same diameter balls but bigger groves so I'm definitely gonna change that part of the design.

![Drive Axle 3 — image 1](https://cdn.hackclub.com/019ee0ea-0fa8-7884-8d14-46e940f709b7/image.png)

![Drive Axle 3 — image 2](https://cdn.hackclub.com/019ee0ea-7752-773b-b27a-15d5bf093645/image.png)

![Drive Axle 3 — image 3](https://cdn.hackclub.com/019ee0ea-be9d-77b6-9e38-c26350e94fe1/image.png)

### Drive Axle 2

**Time spent:** 1.5h

#### My options
So I have 2 options, I could go the easy route and design and 3d print a universal joint or I could go the hard route and make a CV Joint. Now I did what any sensible person would and made the CV Joint.

#### CV Joint
Yeah... Why did I choose this options?? I've been working for 1.5h and still almost no progress.

But looking back at it, 1.5h honestly isn't that much but that obviously excludes the print time.

#### Actually making the CV Joint
I found this very good open source design CV Joint by shane and it's based on the Tarmo5.

I 3d printed that to get some idea of what it is and how it works but I didn't have the bearing balls yet so I tried multiple sizes of 3d printed balls but I couldn't print more then 1 at a time and for each test I needed 4 so it was very annoying to keep printing it but I landed on 6mm balls.

#### Next Step
Next step is to make a somewhat similar design to that one but I'm not there yet.



![Drive Axle 2 — image 1](https://cdn.hackclub.com/019ee010-0acf-7efd-aeff-facf80715691/image.png)

## June 20, 2026

### Drive Axle 4.2

**Time spent:** 0.6h

#### Stopping for now
I've tweaked the dimensions loads of times and it doesn't have the full degrees of movement yet but I'm getting sick of the drive axle. I'm now working on something else for the car.

![Drive Axle 4.2 — image 1](https://cdn.hackclub.com/019ee6c9-cad1-723b-b6ff-2c7548d9e1b1/image.png)

![Drive Axle 4.2 — image 2](https://cdn.hackclub.com/019ee6c9-a651-712d-8948-ba3fe85ddcc7/image.png)

![Drive Axle 4.2 — image 3](https://cdn.hackclub.com/019ee6c9-684b-7a00-8450-7c8c163b3e13/image.png)

![Drive Axle 4.2 — image 4](https://cdn.hackclub.com/019ee6c9-39c7-75f1-92fd-5b9900809c9e/image.png)

### Drive Axle 4.1

**Time spent:** 0.8h

#### Outer Shell
I decided to add the outer shell back because I forgot it needed a part to actually hold the whole mechanism but I can't get the dimension right. I've tried many different sizes but each one is either too lose or it loses many degrees of freedom. I haven't gotten it right yet.

![Drive Axle 4.1 — image 1](https://cdn.hackclub.com/019ee65b-3907-7302-aec8-43b9afb100d7/image.png)

![Drive Axle 4.1 — image 2](https://cdn.hackclub.com/019ee65b-5606-7d90-b5b8-8e652b05711b/image.png)

### Drive Axle 4

**Time spent:** 3h

#### Intro
I think I finally have a working version I'll use in the car. I had to make lots of tweak on dimensions but I finally did it.

#### Older version
This version looks very similar to the version on the different journal entry but with many dimension tweaks and also instead of the bearing balls sitting in the middle of the hole they sit inwards and stick slightly out.

There is a big issue with the balls only sticking this little out and it's that it can't really grab the outer shell very well. That's why I made another version that's simply the same without the outer shell.

 

#### New Version
So the new version is the old version but then without an outer shell. Now this does decrease the freedom in which the mechanism can move but I hope when I'll add 2 of these on either side of the axle with a 45 degrees rotation that it gains that freedom back.

 

![Drive Axle 4 — image 1](https://cdn.hackclub.com/019ee487-29bc-7b51-8c26-efa35d4a24e1/image.png)

![Drive Axle 4 — image 2](https://cdn.hackclub.com/019ee487-5d78-7947-8bfe-bf387b9348aa/image.png)

![Drive Axle 4 — image 3](https://cdn.hackclub.com/019ee487-92ea-72d3-b6ec-d8098a7a78be/image.png)

![Drive Axle 4 — image 4](https://cdn.hackclub.com/019ee48d-1f77-7609-84d8-67afaec3b384/image.png)

![Drive Axle 4 — image 5](https://cdn.hackclub.com/019ee490-0529-7d41-8996-7f096302a80a/image.png)

![Drive Axle 4 — image 6](https://cdn.hackclub.com/019ee490-37c8-741b-9a6c-c249d2e3b33d/image.png)

## June 21, 2026

### Dumb Mistake

**Time spent:** 1.5h

#### My Mistake
I spend about 1.5h making the optimal bearing holder inside the main gear but then I realized that it's impossible for the bearing to sit inside the gears. You'd need 2 bearing for this gear that sit outside the gear directly connected with a rod.

Now I have to throw away all of this work and restart. Also Each time I need to throw away a big part chunk of work, I usually keep the old version and bump it up one version, so for example I now have a v4.1g and the new one I'll edit in is v4.2g.

 

![Dumb Mistake — image 1](https://cdn.hackclub.com/019eebad-3905-7a58-998c-0d2602469f9b/image.png)

![Dumb Mistake — image 2](https://cdn.hackclub.com/019eebad-b2ec-78e9-8cdc-ffc6ba770f0c/image.png)

## June 22, 2026

### Can't get it right

**Time spent:** 0.7h

#### The Back
The back is the part that will hold the suspension and gears and connect them with the rest of the chassis but no matter what I really try, I can't make it look right.

Below you can see the latest iteration but for some reason it always looks off, therefore I think I can better start with something else to get a better outline of this back part but I don't really know what. I've been looking at the CAD model for a while and can't really find a place to continue modeling.

![Can't get it right — image 1](https://cdn.hackclub.com/019ef0cc-4eac-7044-b52a-5249765f66e7/image.png)

### Fixed The Mistake

**Time spent:** 1h

#### Bearing Holder
I made the thing that connects the gear to the bearing, which will eventually connect to the wheel.

 

![Fixed The Mistake — image 1](https://cdn.hackclub.com/019eefef-3cbf-7a83-9a6b-5b599e97c4c1/image.png)

![Fixed The Mistake — image 2](https://cdn.hackclub.com/019eefef-6514-73fd-b627-096043ce4754/image.png)

## June 23, 2026

### The Back 2

**Time spent:** 1h

I made the new back, which is no much better. It holds the bearing to support the drive gear but I haven't added a support for the suspension and suspension arms yet, I'm gonna do that later, once I've got a better outline of the car.

 

![The Back 2 — image 1](https://cdn.hackclub.com/019ef639-de86-71f1-a81e-a0841e111efa/image.png)

![The Back 2 — image 2](https://cdn.hackclub.com/019ef639-fbab-7fdd-803a-44b602f0585a/image.png)

## June 24, 2026

### Middle Gear Holder

**Time spent:** 1.1h

#### Middle Gear Holder
I tried making something to hold the middle gear, this is what I came up with first

But that's obviously impossible to assemble, so I came up with this



#### M4 Screw
I also made the screw that was required to hold a few things in place, this is the screw:imageand this is where I already implemented it:

![Middle Gear Holder — image 1](https://cdn.hackclub.com/019ef9f8-86e3-7e18-914c-38079bf068bd/image.png)

![Middle Gear Holder — image 2](https://cdn.hackclub.com/019efa0c-7ebf-79a2-a681-aad8690d5523/image.png)

![Middle Gear Holder — image 3](https://cdn.hackclub.com/019efa0d-a840-7c6f-84bd-6d08c82dda67/image.png)

![Middle Gear Holder — image 4](https://cdn.hackclub.com/019efa0e-bdb4-70f0-bc6a-71fc94c84fc3/image.png)

### Motor Holder

**Time spent:** 1.7h

#### Floor
I first made a rough sketch of the floor so I could later mount the Motor Holder on it.

#### Floor To Back Connector
Then I made a part that connects the Floor with the Back, it's the red part below.

#### Motor Holder
After that I made this Motor Holder, which can be seen as a light green color in the image below.



#### Other Changes
I made some smaller changes like lowering the Motor

I also gave the middle gear more space so it fits better



![Motor Holder — image 1](https://cdn.hackclub.com/019ef9c6-04ea-746d-b343-d6f3d3a38440/image.png)

![Motor Holder — image 2](https://cdn.hackclub.com/019ef9c7-3b80-71d5-a4f8-a27e64186ae2/image.png)

![Motor Holder — image 3](https://cdn.hackclub.com/019ef9ce-2b18-74c0-b786-a92b69708786/image.png)

![Motor Holder — image 4](https://cdn.hackclub.com/019ef9cf-8a68-7384-ab48-405257229dcc/image.png)

## June 25, 2026

### Suspension Arms

**Time spent:** 1.5h

#### Suspension Arm Holder
I first made this thing that fits on a bearing and holds the suspension arms.



#### Suspension Arms
I then made the suspension arms and imported it into the assembly and assembled it.





#### A Problem
So I've got another problem, the travel on the suspension is much lower then I expected and I need to move the whole thing up. But that's easier said then done because I never use joints (I should really learn them and start using them) and the axle and suspension-arm dimensions need to be changed. I think I might leave it here until I have the suspension and wheels so I have a better view of the dimensions, so I need to get far enough so I can ship this project to get the money to actually buy those parts (so I might end up guessing anyway).

So it might take a while to fix all of that. But I'm also gonna buy bigger wheels and a suspension which I expect has 30-50% more travel.

![Suspension Arms — image 1](https://cdn.hackclub.com/019f0059-e496-7165-9a0c-4a1d8c495040/image.png)

![Suspension Arms — image 2](https://cdn.hackclub.com/019f005a-5331-7690-beb0-797b61ad1a19/image.png)

![Suspension Arms — image 3](https://cdn.hackclub.com/019f005a-d203-7bdd-b2e2-15481d7c9619/image.png)

### Another Mistake

**Time spent:** 2.2h

#### Progress
Before talking about the mistake, I'm gonna talk about the progress because besides that pretty big mistake that will waste like 1-2 hours on CAD I have made a lot of progress.

Wheels
I added a way to mount the wheel on the thing that's gonna spin as you can see below.

 

#### Suspension-Arm Mount
I then added a way to mount suspensions and the design is 3d printing friendly, I first made it stick out the bottom but that just wastes a lot of material so I made sure the bottom can stay flat.



I also did some other smaller things that are not worth mentioning

#### The Mistake
So now to the mistake, I also wanted to make suspension-arm mount on the other side so I made it like seen below

But that's the part that will spin to rotate the wheel, so obviously you can't mount the suspension-arm on there. That took me about ~30m to get the dimensions right and all. So now I have to delete it but the worst part isn't that but it's the fact that I'll have to add a bearing somewhere and a shell around the bearing but fitting a bearing is hard especially because I've already designed the part to be without bearing.

![Another Mistake — image 1](https://cdn.hackclub.com/019efffe-d638-7c63-9288-a906d2894f48/image.png)

![Another Mistake — image 2](https://cdn.hackclub.com/019efffe-fa34-7064-bfd4-dc8bdca7c40d/image.png)

![Another Mistake — image 3](https://cdn.hackclub.com/019f0001-4ccb-722c-a455-2192d076d337/image.png)

![Another Mistake — image 4](https://cdn.hackclub.com/019f0002-e0ba-770f-8df2-fcb86c38105d/image.png)

### Perfected the Drive Axle

**Time spent:** 3h

#### Trying it myself
So I was trying to get it right for about 1-1.5h myself but it was just way too hard.

#### Copying someone else
I obviously meant, taking inspiration🤐

Seriously tho, I was trying this boring loop of input dimension -> print -> test🔁 But then I just realized I could take someone's dimensions, so I took this persons dimensions instead and obviously changed the casing so it fits my car.

It did still take me a long time to draw the full thing even knowing where everything needs to go.

Here are some images of the finished products in cad. 

Here it is in assembled car on cad: 

Here it is IRL:

![Perfected the Drive Axle — image 1](https://cdn.hackclub.com/019eff2c-ba55-73f2-8d93-3de9c4ba87c7/image.png)

![Perfected the Drive Axle — image 2](https://cdn.hackclub.com/019eff2d-153d-73f0-bd41-213f180e010b/image.png)

![Perfected the Drive Axle — image 3](https://cdn.hackclub.com/019eff2d-43f5-7730-a0db-24e148d311df/image.png)

![Perfected the Drive Axle — image 4](https://cdn.hackclub.com/019eff2d-e7a1-7052-aa9b-22f453df4fde/image.png)

![Perfected the Drive Axle — image 5](https://cdn.hackclub.com/019eff2e-897a-7cae-a440-6062a5459bfd/image.png)

![Perfected the Drive Axle — image 6](https://cdn.hackclub.com/019eff2e-f99e-723a-a1a9-9dd78df3f8f5/image.png)

## June 26, 2026

### Joints

**Time spent:** 3.8h

First Time
This is my first time in my life I've used joints, but honestly it went better then expected. I'm not saying it was easy, it was just more intuitive then I thought. That's also why it took me so incredibly long.

Suspension
So the first thing I used joints on was the suspension arms, I previously said that I couldn't find a right spot where to mount the suspension and this will make it MUCH easier to decide that. Now all I have to do is "capture position" and it works.

 

#### Flawed design
By using this I also saw a flaw in my design, so I'm glad I tried to use joints. The design flaw was when moving the suspension arms up the axle (purple component in the image) would need to be longer, so instead of having holes like the image below I made it a slider where the screw sits (check  above).



![Joints — image 1](https://cdn.hackclub.com/019f048c-b8e8-73a6-a1ac-dbaa1582dbe8/image.png)

![Joints — image 2](https://cdn.hackclub.com/019f048c-f974-79d9-85fb-386cf909f77a/image.png)

![Joints — image 3](https://cdn.hackclub.com/019f0490-6095-71e0-80ca-286a43d14c93/image.png)

## June 27, 2026

### Suspension

**Time spent:** 1.5h

#### Added Suspension to the joints
I added suspension to the joints to see how far the wheel moves up and down and as you can see in the images below it barely moves, so I'm gonna purchase new suspension with more travel so it moves up and down more.





#### Researched what suspension
It was very hard to find a suspension with the same eye-to-eye 70mm length, so I will make it easier to swap suspension for different lengths.

I found this 70mm suspension but I fel like it was very expensive. https://nl.aliexpress.com/item/1005003697115577.html?spm=a2g0o.cart.0.0.2ed761d7MFChMu&mp=1&gatewayAdapt=glo2nld

I also found this one, where I'm probably gonna choose the 80mm one if I'm gonna pick this one.

https://nl.aliexpress.com/item/1005009743739096.html?spm=a2g0o.cart.0.0.2ed761d7MFChMu&mp=1&gatewayAdapt=glo2nld

![Suspension — image 1](https://cdn.hackclub.com/019f093e-539c-7d27-8ee7-2b25b33e1d46/image.png)

![Suspension — image 2](https://cdn.hackclub.com/019f093e-6cba-77fd-ad51-e306bc7851b1/image.png)

## June 28, 2026

### I DID IT

**Time spent:** 0.5h

Sloppy journal entry but Idc, I finnaly did it!! This took me way too much time for such a simple part and it felt like I was at it for like 100 years but it was actually just ~2-3h which is still WAY TOO LONG for such an easy part like this.

![I DID IT — image 1](https://cdn.hackclub.com/019f0fd5-a3e0-731d-a002-3d8bce4fe9c2/image.png)

### I CAN'T REVOLVE

**Time spent:** 0.1h

Okay I'm actually crashing OUT BC WHY CAN I NOT REVOLVEEEEEEEEEE. IT'S NOT CROSSING, IT'S THE SAME DEPTH. I DON'T UNDERSTAAAAAAAAAAAAAAAAAAAAND

![I CAN'T REVOLVE — image 1](https://cdn.hackclub.com/019f0fbb-b998-7a05-ac46-952f3d5265e4/image.png)

### Doing it again...

**Time spent:** 0.2h

Yh it got fckd up again. Stuff is overlapping for some reason and perfectly straight lines that I draw are some reason curved (I can't even see it's curved, fusion js says they are)

![Doing it again... — image 1](https://cdn.hackclub.com/019f0fac-25bd-7010-a3f6-42753dbcf613/image.png)

### Fusion Bugging

**Time spent:** 1h

#### Something weird
So I tried to make the new version of the part you see in my previous journal but fusion isn't really on my side. For some reason I can't combine parts that are clearly inside eachother and it says some faces are curved that I never made curved. I tried redoing the part multiple times and it just won't work. It should've been done in 5-10m but I've been at it for an hour and this together with the 40 degrees heatwave is NOT nice 😭

![Fusion Bugging — image 1](https://cdn.hackclub.com/019f0fa2-afab-7053-b430-1041ecfd5301/image.png)

![Fusion Bugging — image 2](https://cdn.hackclub.com/019f0fa3-039e-7d0a-b328-375cf1f71cfd/image.png)

### Bearing Shell

**Time spent:** 0.5h

#### Front Bearing Shell
So I put effort into the bearing shell on the front to make it look the same on the outside but work the same on the inside so it would look nice, but this has a flaw and it's that it can't rotate to steer the wheel.

![Bearing Shell — image 1](https://cdn.hackclub.com/019f0ef3-8faf-7d73-93a5-14a1b4799f06/image.png)

### Other Side

**Time spent:** 5h

#### Components
I placed down where every component will be and made an encasing for the battery (shown below)



Servo Horn
Also made the servo horn. I made a couple iterations to get the press fit just right, I want it to be technically usable without a screw, even tho I will be using one I think that that's just better.



Copied the right side
I copied the right side to the left side. While doing this the joints were all messed up, I also see no point in adding joints to the left side so I will not be doing that.



#### Starting the front
I started making the front of the car.



#### Overall
Here's how the car looks overall and I think I've made a lot of progress today.

 

For reference here's how it looked like yesterday
 

![Other Side — image 1](https://cdn.hackclub.com/019f0ebf-2e48-749e-9896-24e162d39488/image.png)

![Other Side — image 2](https://cdn.hackclub.com/019f0ebf-8532-7c6e-83fb-378b66f3fbf2/image.png)

![Other Side — image 3](https://cdn.hackclub.com/019f0ebf-d291-779b-ab9a-652473b8c89c/image.png)

![Other Side — image 4](https://cdn.hackclub.com/019f0ec0-d66d-7838-ada7-ed45de297abe/image.png)

![Other Side — image 5](https://cdn.hackclub.com/019f0ec3-401e-7180-bf62-04c98e9803b3/image.png)

![Other Side — image 6](https://cdn.hackclub.com/019f0ec3-6602-7be9-a7a2-5150ca883243/image.png)

![Other Side — image 7](https://cdn.hackclub.com/019f0ec3-97a3-7e0e-8618-bacee87eea1e/image.png)

![Other Side — image 8](https://cdn.hackclub.com/019f0ec4-8227-77ce-88f7-379caf028831/image.png)

![Other Side — image 9](https://cdn.hackclub.com/019f0ec4-9dcb-752e-88d4-1480ddfec4b2/image.png)

![Other Side — image 10](https://cdn.hackclub.com/019f0ec4-d2d3-7648-9488-c369887c9340/image.png)

## June 29, 2026

### Added Joints

**Time spent:** 1.1h

#### Joints
I added the joints in the front and also for steering the car, I did realize when you steer to far to the right it gets stuck. I still need to find a way to fix that.

![Added Joints — image 1](https://cdn.hackclub.com/019f1509-53db-7934-94d7-0a495185385d/Video%20Project%202.gif)

### Ball Joint

**Time spent:** 0.8h

#### Ball Joint
I made a ball joint with perfect tolerances and an eye to eye length of exactly 136.895 mm.



#### Suspension Holder
I also quickly made this suspension holder.



#### Servo horn
I also updated the servo horn so it can hold the nuts needed to hold the screw in place.



![Ball Joint — image 1](https://cdn.hackclub.com/019f14d9-113a-7b48-8949-ac820dc4149c/image.png)

![Ball Joint — image 2](https://cdn.hackclub.com/019f14db-f8d5-7e54-b382-039ea72f5a46/image.png)

![Ball Joint — image 3](https://cdn.hackclub.com/019f150c-0d2f-733c-8738-53b893fc6512/image.png)

## June 30, 2026

### Quick Recap

#### Final Journal Before submitting
This is the final journal before submitting for the first time, after I get my funding I'll build it and ship it again!

Here is how it looks like now

 

#### Github
The files are available on GitHub to download and use.

![Quick Recap — image 1](https://cdn.hackclub.com/019f19fc-d225-7013-9c3b-fa78fa773d38/image.png)

![Quick Recap — image 2](https://cdn.hackclub.com/019f19fc-f5c1-7482-88d2-86ad6edb763e/image.png)

![Quick Recap — image 3](https://cdn.hackclub.com/019f19fd-11b3-7c6a-93b7-77c572152d42/image.png)

![Quick Recap — image 4](https://cdn.hackclub.com/019f19fd-2d3f-74cd-a498-b40a1fbe2470/image.png)

![Quick Recap — image 5](https://cdn.hackclub.com/019f19fd-4f28-70be-a3a9-7c22cf6b0da3/image.png)

![Quick Recap — image 6](https://cdn.hackclub.com/019f19fd-7c2c-7e50-bf47-cf7581a85023/image.png)

![Quick Recap — image 7](https://cdn.hackclub.com/019f19fd-b743-708d-bd74-aabf604d51d1/image.png)

### Pretty much done

**Time spent:** 1.3h

#### Other Side
Copied the right side to the left side.



#### Hold components
I made these things that hold the components in place.



#### Screw Spacer
Added a spacer so the screw doesn't stick out on the bottom.



#### Fixed Steering Issue
I fixed the issue mentioned in the previous journal about the steering getting stuck by replacing the ball joint with this:



![Pretty much done — image 1](https://cdn.hackclub.com/019f19de-f2c3-7cd4-8873-afeb9b0fb665/image.png)

![Pretty much done — image 2](https://cdn.hackclub.com/019f19df-4b10-70bb-bd4c-0133489194fc/image.png)

![Pretty much done — image 3](https://cdn.hackclub.com/019f19e7-e27e-7eb1-9545-c93e9dc6f3e3/image.png)

![Pretty much done — image 4](https://cdn.hackclub.com/019f19ee-a47c-7e8c-a5f7-273299bb9edb/image.png)

## August 17, 2026

### Bumpers!!

**Time spent:** 1.3h

#### How Could I forget???
I was trying to make one of the best fully 3d printed homemade RC cars and I forgot to add BUMPERS?? I mean they're legit 129 years old and so fun on an RC Car!

#### First iteration
Yeah you could say this looked better in my head then in design. It's extremely small but making it bigger would make the TPU useless. So on my next take I'm gonna add a support structure from either PLA or PETG and then add TPU onto that structure.

#### Abording mission ⚠️⚠️
After careful consideration I decided not to do this, the deadline is almost here and it's not really a requirement. My bad lolll

![Bumpers!! — image 1](https://cdn.hackclub.com/01a00c50-47bc-7900-93b9-2f81e04830e2/image.png)

## August 19, 2026

### The Back

**Time spent:** 1.2h

#### The back
The back consists of 2 parts, 1 upper part and 1 bottom part. It's this one:

It holds everything in place and I made a couple tweaks here.

Design changes:

Bearing hole - 22.1mm -> 21.9mm
Screw Hole size (for the suspension arms) - 4.3mm -> 3.15mm
#### Failed Print
This one's screw hole was to big.

#### Semi-Successful print
This one will work for the final design but I had to cut the corners of the design with my dremel otherwise I couldn't screw the screws in.



![The Back — image 1](https://cdn.hackclub.com/01a01ba9-d62d-7bd3-919e-0a329b55afb2/image.png)

![The Back — image 2](https://cdn.hackclub.com/01a01bac-564d-7a48-ab39-bfb9f5383ccd/image.png)

![The Back — image 3](https://cdn.hackclub.com/01a01bae-74e2-7a0e-9253-9c450aa928a0/image.png)

## August 21, 2026

### Previous Car

**Time spent:** 0.5h

#### I took apart my previous car
I took apart my previous car because I needed the screws for this project.

![Previous Car — image 1](https://cdn.hackclub.com/01a02648-6038-756e-a7dc-685ef8e8349f/image.png)

### Keep Printing...

**Time spent:** 1.1h

#### Design Mistakes
Forgot this and had to reprint it.

#### Prints
I printed 7 more working parts and 1 more failed one (the one in design mistakes).

When assembled it now looks like this

![Keep Printing... — image 1](https://cdn.hackclub.com/01a0259c-a117-7093-b277-c10603988962/image.png)

![Keep Printing... — image 2](https://cdn.hackclub.com/01a02624-ce9a-7c64-aeac-1c50b5427340/image.png)

## August 24, 2026

### Broken part... Still works tho

**Time spent:** 0.2h

#### Motor Holder
So I designed the motor holder part a little wrong but it still works. I couldn't put the motor inside the motor holder and it broke.

![Broken part... Still works tho — image 1](https://cdn.hackclub.com/01a03572-e0d6-7286-93e9-652b19d41ab3/image.png)

### Took apart my previous car (even more)

**Time spent:** 0.3h

I didn't fully complete it last time... So now I have all the screws and nuts from the previous car.

![Took apart my previous car (even more) — image 1](https://cdn.hackclub.com/01a0356f-ea58-7822-ba63-a6ae1f436f2d/image.png)

### Motor Holder

**Time spent:** 0.6h

#### Changed the Motor Holder and the Motor Gear
Before:

After:

Before:

After:

Before:

After:

Before:

After:

![Motor Holder — image 1](https://cdn.hackclub.com/01a0344e-ea59-720f-9a12-6c961cb73302/image.png)

![Motor Holder — image 2](https://cdn.hackclub.com/01a0344f-2467-7b9e-97a5-997982d1fc1e/image.png)

![Motor Holder — image 3](https://cdn.hackclub.com/01a0344f-7ee9-70ba-93ea-34a556f98627/image.png)

![Motor Holder — image 4](https://cdn.hackclub.com/01a0344f-ab6d-7ae6-9e4b-cb7dbb68e457/image.png)

![Motor Holder — image 5](https://cdn.hackclub.com/01a03450-1b02-7205-8b03-b829da8f794c/image.png)

![Motor Holder — image 6](https://cdn.hackclub.com/01a03450-424f-78cd-84a3-e4500d840665/image.png)

![Motor Holder — image 7](https://cdn.hackclub.com/01a03450-b5cb-75f6-9e87-ad4d4064cdec/image.png)

![Motor Holder — image 8](https://cdn.hackclub.com/01a03450-eaa1-7050-b8f0-88f513d8e31c/image.png)

### Sanding Down

**Time spent:** 0.2h

#### Sanding Down
I had to spend 15 minutes sanding this part down because the big gear was scraping down on it. It's not the prettiest but atleast it works.

![Sanding Down — image 1](https://cdn.hackclub.com/01a03421-f7be-71d9-8bf9-d4879d8dbec8/image.png)

### Remodeling + Printing

**Time spent:** 7.8h

#### Modeling
#### Design Changes
#### Wheel holder
Problem: It didn't fit

Before: 

After: 

New problem: It was rubbing on the outer edge of the bearing

New version:

#### Suspension Holder
Hole size too large 4.3mm->2.9mm

#### Front - Center Connector
Before:

After:

#### Wheels Not on the same Height
This is a massive problem that I didn't notice before. The front and back wheels aren't on the same height as you can see in the before picture.

Before:

After:

#### Motor Holder
The part that holds the motor doesn't have space for the wires.

Before:

After:

#### Servo Hole
The hole where the servo gets mounted on wasn't designed correctly.

Before:

After:

#### Moved Servo Up
I moved the servo up otherwise it would scrape against the floor.

Before:

After:

#### Printed Items
So I've printed a lot of items. I can't even count them all but it's been 3 days (excluding nights) of almost continuously printing. I've printed the back which includes the most amount of complex stuff (like the CV-joint which is better then I could've ever imagined) and I've printed the front of the car. All that's left is to print the middle but before I do that I need to measure some more and change the design which is really hard because the design is and absolute mess. But after I do those changes I can start printing the really big part which will take around 4.5h and has a big likelihood to fail because my printed can't handle big flat parts. Then it's a matter of printing the housing for the electronic parts and the steering system. After I've done all of those things I can make a mock up of the wiring. Then when I receive my last and final parts I will solder them on together with my grandpa and test the car there.

#### The Back
 

#### The Front
 

![Remodeling + Printing — image 1](https://cdn.hackclub.com/01a02976-42f9-7876-b3d5-c4aa3453dd39/image.png)

![Remodeling + Printing — image 2](https://cdn.hackclub.com/01a02976-76bf-7c80-9e82-5e51b8dfe08f/image.png)

![Remodeling + Printing — image 3](https://cdn.hackclub.com/01a02978-ff7e-7e85-a0f2-2cea59cda317/image.png)

![Remodeling + Printing — image 4](https://cdn.hackclub.com/01a02979-1ada-7f1c-bdce-b702e1593c26/image.png)

![Remodeling + Printing — image 5](https://cdn.hackclub.com/01a029b0-fbba-725a-8be5-cf3094556494/image.png)

![Remodeling + Printing — image 6](https://cdn.hackclub.com/01a02dae-9ee5-7d7c-b40d-4e90866a9f63/image.png)

![Remodeling + Printing — image 7](https://cdn.hackclub.com/01a02dba-4400-7de2-917a-545d66b38c8b/image.png)

![Remodeling + Printing — image 8](https://cdn.hackclub.com/01a02dbb-863a-7cee-be10-794c1d3b182c/image.png)

![Remodeling + Printing — image 9](https://cdn.hackclub.com/01a02dc6-aabe-79e3-a06e-2bc90c81ab2c/image.png)

![Remodeling + Printing — image 10](https://cdn.hackclub.com/01a02dbd-ed26-7b16-9b3f-d101efaa8702/image.png)

![Remodeling + Printing — image 11](https://cdn.hackclub.com/01a02dbe-1cec-7e6d-b10a-b4c37c7d47e7/image.png)

![Remodeling + Printing — image 12](https://cdn.hackclub.com/01a02dc8-1c58-72cc-8857-9bd3895b98c2/image.png)

![Remodeling + Printing — image 13](https://cdn.hackclub.com/01a02dc8-611f-7f27-9fd3-61c28964cd83/image.png)

![Remodeling + Printing — image 14](https://cdn.hackclub.com/01a02f4b-42b9-7700-a9ed-781aaff6b87a/image.png)

![Remodeling + Printing — image 15](https://cdn.hackclub.com/01a02f4b-7041-7ada-8aea-b42ce8a897dc/image.png)

![Remodeling + Printing — image 16](https://cdn.hackclub.com/01a03363-670e-7359-8d8b-5a0627f50dc1/image.png)

![Remodeling + Printing — image 17](https://cdn.hackclub.com/01a03363-714f-726f-9f44-b429dfafcc2c/image.png)

![Remodeling + Printing — image 18](https://cdn.hackclub.com/01a03413-c13c-72a6-bf0e-243dc7e00e46/image.png)

![Remodeling + Printing — image 19](https://cdn.hackclub.com/01a03413-d0b5-7cf0-b410-6ef0f2c06d35/image.png)

## August 26, 2026

### Printed, assembled and edited more parts

**Time spent:** 2.2h

#### Testing
#### Servo Test
I first tested to see if the servo holder actually fitted around the servo (and it did)

#### Gathering more screws
Screws before


#### Took These old Projects apart
 

#### Aftermath


Found these screws (unorganized)


Image of how many I have right now


#### Printing...


#### Printed and Assembled!
Also mounted the battery, motor and servo.



#### Mounted the wheels
 

#### Almost done!
All I need to do is print the steering system and the mounts for the receiver and ESC.

![Printed, assembled and edited more parts — image 1](https://cdn.hackclub.com/01a03e5f-dbc9-7e30-a43c-8397398cbff6/image.png)

![Printed, assembled and edited more parts — image 2](https://cdn.hackclub.com/01a03e62-d737-73cf-89f6-d42b905658ad/image.png)

![Printed, assembled and edited more parts — image 3](https://cdn.hackclub.com/01a03e63-18b7-7381-84d3-46af414cc189/image.png)

![Printed, assembled and edited more parts — image 4](https://cdn.hackclub.com/01a03e63-26e7-700d-87cd-be7f0a49ebf3/image.png)

![Printed, assembled and edited more parts — image 5](https://cdn.hackclub.com/01a03e63-7255-7ef3-99d9-1262c1a1a9a8/image.png)

![Printed, assembled and edited more parts — image 6](https://cdn.hackclub.com/01a03e63-ccb6-7233-8be7-6402fb88e591/image.png)

![Printed, assembled and edited more parts — image 7](https://cdn.hackclub.com/01a03e64-3692-7ca1-a00f-53197e399813/image.png)

![Printed, assembled and edited more parts — image 8](https://cdn.hackclub.com/01a03e64-78b7-7785-8ffa-722a7f30e031/image.png)

![Printed, assembled and edited more parts — image 9](https://cdn.hackclub.com/01a03e64-bed2-7ae4-a46d-f36bcaa96502/image.png)

![Printed, assembled and edited more parts — image 10](https://cdn.hackclub.com/01a03e65-8043-70d3-abe3-0b5f3870230e/image.png)

![Printed, assembled and edited more parts — image 11](https://cdn.hackclub.com/01a03e65-8098-778d-8ceb-1160433f0cfb/image.png)

### More Remodeling

**Time spent:** 0.4h

#### Modeling
#### Forgot Something
#### Receiver Holder
Forgot the holes to connect the receiver to the baseplate.

 

#### Center Gear
Currently the part that holds the center gear has no way of connecting to the Baseplate. I will now make a part that connects it very firmly.



Now it has a firm platform to stand on



![More Remodeling — image 1](https://cdn.hackclub.com/01a0380d-09fd-7a93-abb1-35e27fc4a70c/image.png)

![More Remodeling — image 2](https://cdn.hackclub.com/01a0380d-3a5d-782b-acd7-fdacde74f61c/image.png)

![More Remodeling — image 3](https://cdn.hackclub.com/01a0380e-d0d0-71e5-b574-85179d972d47/image.png)

![More Remodeling — image 4](https://cdn.hackclub.com/01a03812-75de-7317-904b-4d2fb57b0395/image.png)

## August 27, 2026

### Circuit

**Time spent:** 0.2h

#### Quickly made a circuit
 https://app.cirkitdesigner.com/project/dc01d9bb-29a0-4886-928e-08fcadd44358

![Circuit — image 1](https://cdn.hackclub.com/01a04430-c302-70dc-80a8-39ae4938a2c1/circuit_image%20%282%29.png)

### Electrical system

**Time spent:** 0.4h

#### Electrical System
So I wanted to get a mock up ready of the electrical circuit so when I go to my grandpa and we solder the ESC parts together I can plug it in there and we can all watch together.

I tested it with a separate ESC and motor. I will also take the other servo with me to my grandpa because the one I have installed right now sometimes stays stuck, probably due to lack of voltage/amps from the BEC. The reason why I still have it installed is because the new ESC might have a better ESC.

![Electrical system — image 1](https://cdn.hackclub.com/01a04428-14b7-7746-957f-0bb425df2125/image.png)

### Last prints OMGGG

**Time spent:** 0.4h

#### Holders
I still needed to print the parts that will hold the Receiver and ESC. The Receiver was first try simple and done, but the ESC was still designed using the measurements of the previous ESC so I printed the wrong ones. I will now update the dimensions to fit the new one.

 

Everything is mounted! <!-- Uploading ... -->

![Last prints OMGGG — image 1](https://cdn.hackclub.com/01a043d5-b175-752f-8c54-81f243d89785/image.png)

![Last prints OMGGG — image 2](https://cdn.hackclub.com/01a043db-d57f-7ed0-8afb-0c4bc243104f/image.png)

### Steering system

**Time spent:** 3.2h

#### Steering System
The second to last system I need to actually work on before saturday (that's when I wanna finish car) this was the old car model of the steering system

 

But that system wasn't working

#### New Steering System
So now I'm working on this simpler steering system that has never disappointed me.

A simple single rod like this one will not work because of the suspension moving up and down.

#### Failure
Spend way too long making this useless thing, I will delete everything in here and make the arm in another, cleaner environment. That must help. 

#### First timelapse
Not even the fully finished product of the steering arm but I just wanted to see how this worked. https://lapse.hackclub.com/timelapse/0TEyCYOtqVWB

#### Newer Version
So I printed a version but I still had to change the servo horn. The arms were good, but when you turned the servo to the right it turned less then when you turned the servo to the left.

So now I made this version hoping to fix that issue

And it did fix that issue

#### Steering Complete
The steering works!

#### Images:

 

 

![Steering system — image 1](https://cdn.hackclub.com/01a042cc-50f7-755f-9823-2b5a6c1ca615/image.png)

![Steering system — image 2](https://cdn.hackclub.com/01a042cc-79e0-72fd-b0df-0991d206ac14/image.png)

![Steering system — image 3](https://cdn.hackclub.com/01a042cd-a477-76a6-b7ae-db65e7c9b8d0/image.png)

![Steering system — image 4](https://cdn.hackclub.com/01a042dd-bae1-7007-8694-0329ef40795f/image.png)

![Steering system — image 5](https://cdn.hackclub.com/01a042e8-8576-7dbb-929a-5c5a2d809a7f/image.png)

![Steering system — image 6](https://cdn.hackclub.com/01a042e7-c79f-74f8-9448-18812e3509ac/image.png)

![Steering system — image 7](https://cdn.hackclub.com/01a04331-9e84-73be-a6b9-29cf692370d4/image.png)

![Steering system — image 8](https://cdn.hackclub.com/01a0439c-7047-7786-afae-ec88ff040cda/image.png)

![Steering system — image 9](https://cdn.hackclub.com/01a0439c-06f2-772f-a256-48b1e0d8572f/image.png)

![Steering system — image 10](https://cdn.hackclub.com/01a0439c-c382-788c-9ded-ab6846d0aa18/image.png)

![Steering system — image 11](https://cdn.hackclub.com/01a0439e-28dd-72ee-8403-e6bce9d22a4c/image.png)

![Steering system — image 12](https://cdn.hackclub.com/01a0439e-1cb2-78c5-a0b6-351b1c4c9070/image.png)

![Steering system — image 13](https://cdn.hackclub.com/01a0439e-39cb-7c83-9465-29f83f39361d/image.png)

## August 31, 2026

### The Final Stretch

**Time spent:** 9.3h

#### First Stage
So It's been a couple days and I haven't stopped these days. So I was originally waiting for some part to arrive and after they've arrived I went to my grandpa to solder them on the ESC. They were 3 bullet connectors and 1 XT60 connector. As you can see on the image it didn't come with the ESC



and these were the connections



#### Stage 2
So after I soldered the ESC I wanted to put the car together, put the wheels back on and drive him. But after 2 seconds of the car going like 0.5mph it stopped. That's because the plastic around the screw was stripped away due to the force of it.

This was the car at that time (broken)

#### Stage 3
After I got home I got to thinking of a solution, I could use threated inserts for this but it would've been arrived after Macondo ended. So I put 2 screws diagonally in the design at the points it stripped away so it couldn't strip away. Atleast the steering worked fine.





#### Stage 4
Now this was a lot easier said then done. These parts were buried deep in the drive chain but honestly, that would've still been a 2 hour job MAX. Well... After taking the car apart 2 parts broke with a total of print time of like 30 minutes, which wasn't too bad. But I wouldn't be telling this if that was just it because I have been busy the entire day. After printing the parts for the first time the screw holes weren't big enough... well that's wasted time. I printed it again, no problem and tried to assemble it and then all of a sudden the press fit bearing wasn't pressing hard enough?? Well that's annoying, I have to find the right size for that again and I did and printed it all and then suddenly the inside of the drive chain (the moving part) was scraping against the outside (the stationary part) which created a lot of friction so I also had to redesign that part. And this went on for the entire day.

#### Stage 5
So I fixed the original issue but the part you can see in the image was a weak point, which was absolutely expected. But that does mean I got further then last time, last time it didn't break because there wasn't enough force on the wheels. So this time there was force (which in this case is just the tires touching the ground which is good!!).

Tomorrow I'm gonna fix this issue and that should be the last thing I need to fix.





#### Stage 6.1
So I already redesigned the part to be a lot bigger, but it's way too late to start my printer since my parents are going to bed and my neptune 4 pro isn't known the be the quietest printer.



#### The next day...
So I couldn't fall asleep and I kid you not at 4am I realized a flaw in my design, if I printed it like this all the force would go through the screw and the screws needs to be lose. I'm gonna redesign it again.

After redesigning it it looks like this, with the issue fixed.

#### Stage 7
I printed the parts and assembled everything and

IT WORKS OMGGGG
THERE'S NO WAY, I DID THIS AND IT'S IN THE DEADLINE!!!!

#### Random Images

![The Final Stretch — image 1](https://cdn.hackclub.com/01a053ee-db28-7e88-b91c-0e1886fe43fd/image.png)

![The Final Stretch — image 2](https://cdn.hackclub.com/01a053f1-0abe-7c8e-9a85-e085a2376da2/image.png)

![The Final Stretch — image 3](https://cdn.hackclub.com/01a053f8-81eb-7a22-8845-f09d3192d24d/image.png)

![The Final Stretch — image 4](https://cdn.hackclub.com/01a053f3-c149-705f-a596-8e9e5891a5a5/image.png)

![The Final Stretch — image 5](https://cdn.hackclub.com/01a053f4-0ef5-7eeb-9b88-73aa879de211/image.png)

![The Final Stretch — image 6](https://cdn.hackclub.com/01a05454-2eff-70e6-a35e-ae411150bf3c/image.png)

![The Final Stretch — image 7](https://cdn.hackclub.com/01a05456-64a7-73a0-8f30-ae5667b95121/image.png)

![The Final Stretch — image 8](https://cdn.hackclub.com/01a0576b-667b-7fa1-923c-c9097b0b7d41/image.png)

![The Final Stretch — image 9](https://cdn.hackclub.com/01a05773-98d5-7c9b-87dd-289371a93187/image.png)

![The Final Stretch — image 10](https://cdn.hackclub.com/01a05826-b8fc-7f32-9913-1d19b5d96458/image.png)

![The Final Stretch — image 11](https://cdn.hackclub.com/01a05826-c711-7efb-9031-d47584b34d2c/image.png)

![The Final Stretch — image 12](https://cdn.hackclub.com/01a05827-4168-7336-b369-b24c63c3ff31/image.png)

![The Final Stretch — image 13](https://cdn.hackclub.com/01a05828-2d83-7b85-a6b2-647b95ef8fcf/image.png)

