# exercise-counter

  is a small prototype for counting situps, squats and pushups with Arduino Nano 33 BLE sense
  
  
  

https://user-images.githubusercontent.com/57222054/125252036-38f0bd00-e2f8-11eb-85eb-2af83ffefcec.mp4

# One-pager

[machinelearning - Frame 2.pdf](https://github.com/maxicozy/exercise-counter/files/6800085/machinelearning.-.Frame.2.pdf)



  
## Status
 
  Work in progress, the machine learning model is not quite reliable and only half of the counter is currently fuctioning.
  
## Installation
  
  A quick guide if you want to try our prototype yourself
  
### Needed Hardware

  - Arduino Nano 33 BLE sense
  - Something to tie it to your wrist (Data was recorded with device on back of the wrist, with cable facing inwards, as       shown in onepager)
  - A long USB-Extension Cable (optional, but recommended for more freedom during exercises)

### Used Software

   You need to install: 
  
   - Node Red as Dashboard
    
      - [https://nodered.org/docs/getting-started/local#installing-with-npm](https://nodered.org/docs/getting-started/local#installing-with-npm)

      - [https://flows.nodered.org/node/node-red-dashboard](https://flows.nodered.org/node/node-red-dashboard)
  
   - Arduino IDE

## How to use
  
  Copy the Edge Impulse generated `fitness-tracker_inferencing` Library into your Arduino libraries folder.
  Then upload the Arduino Code to your Nano 33.
  
  Start Node-red and import the code provided in `node-red.json`, deploy changes and open the dashboard.
  Attach the Arduino to your wrist, perform excersises, and watch the respective counters hopefully counting your moves!

## Current Problems

   The Edge Impulse - generated Machine Learning Model is not quite reliable, more data is needed. (Collecting large     quatities of workout data is easier said than done though).
    
   Also, our current implementation of our Counter is pretty reliable when it comes to detecting movement vs no movement. So the idea of implementing a Counting function is to only allow a count to be added after an exercise was detected, and simultaneously, a pattern of "movement - no movement - movement - no movement" has just been recognised.

  It does'nt work yet though.

