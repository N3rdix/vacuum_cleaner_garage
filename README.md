# Building a smart vacuum robot garage 
<img src="/images/entering_robot.jpg" height=350> <img src="/images/parked_robot.jpg" height=350>

## What you need
- a vacuum robot of course :-)
- **Electronics**
  - an Arduino board with 5V power supply 
    - if communication via MQTT is required it should be a LAN/WIFI version
    - otherwise a simple Arduino Uno is sufficient
  - a Servo motor with enough torque (~20kg, depending on the weight of your panel). I used <a href="https://www.amazon.de/dp/B07KSCFNDK" target="_blank">this</a> one.
  - an IR sensor (measures the reflected light). I used a E18-D80NK, like <a href="https://www.amazon.de/dp/B07DKGGHCD" target="_blank">this</a> one.
  - low voltage wires
- **Housing material:**
  - wood (i used a poplar plate 500x500x8mm)
  - aluminum T-profiles for hiding cutting edges (here: 20x15mm)
  - aluminum round bar profile (8mm)
  - 2 rawplugs which fit into the round bar profile
  - aluminum square profile (10mm)
  - 3mm threaded bar from servo to door
  - some screws
  - time
## Building the garage
<img src="/images/sketch.jpg" height=350>

### Housing
I used a routing machine to fix the base station on the ground, it cannot be moved by chance by the robot:
<img src="/images/plate.jpg" height=350>

### Closing mechanism 
The servo needs a long enough threaded bar, otherwise it won't open the door wide enough:
<img src="/images/servo.jpg" height=350> 

The sensor it fixed 2 plastic nuts. I wanted to be flexible when positioning the sensor so I made a wider whole:
<img src="/images/sensor.jpg" height=350>

## Wiring


## Programming the Arduino
```cpp
Code will be shared soon
```
