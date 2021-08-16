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

The sensor it fixed 2 plastic nuts. I wanted to be flexible when positioning the sensor so I made a wider whole:
<img src="/images/sensor.jpg" height=350>

### Closing mechanism 
Your kitchen panel can be fixed on the aluminum square profile with some screws. The round bar profile will be plugged into the square profile. Put the rawplugs into the round bar profile upfront, then it can be easily tightened with screws from the outside of the housing.
<img src="/images/door.jpg" height=350> 

The servo needs a long enough threaded bar, otherwise it won't open the door wide enough:
<img src="/images/servo.jpg" height=350> 

## Wiring
Depends on your board, my setup is the following:
- IR sensor connected to digital pin 2, GND and 5V
- servo motor connected to digital pin 9, GND and 5V

## Fallback
You should consider to implement a fallback in case you can't move the robot to open the door. I use 2 things to be on the safe side:
- a simple switch with 2 buttons to open/close the door. This overrules the sensor's state
- open the door initially at power-on, e.g. after a power outage.
- 
## Programming the Arduino
Basic program flow:
> - Initially open the door (calibrate the servo)
> - check if the switch was pressed
>  - if yes, open/close the door 
>  - if not, check the IR sensor
>    - if the robot is docked close the door
>    - otherwise open the door


```cpp
Code will be shared soon
```
