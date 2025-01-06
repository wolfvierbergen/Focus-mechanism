# Focus-mechanism

A focus mechanism for a thermal camera.
The mechanism turns a lens of a thermal camera and keeps it’s absolute position.<br><br>
![without camera](https://github.com/wolfvierbergen/Focus-mechanism/blob/main/Images%20focus%20mechanism/IMG_1715.jpg?raw=true)<br>
![with camera](https://github.com/wolfvierbergen/Focus-mechanism/blob/main/Images%20focus%20mechanism/IMG_2508.jpg?raw=true)
## Description
The focus mechanism consists of a belt drive that turns the lens of a thermal camera.
The main component is a  stepper motor, a Nema 14 with dual axis: 
- the front axis is used to turn a belt mechanism connected to the lens.
- The back axis is connected to a multi turn potentiometer, this is necessary for the absolute position control.

Hardware

	•	Arduino Uno
	•	DRV8825 stepper driver
	•	Nema 14 (dual axis)
	•	Mosaic core 9.1mm lens core

Firmware

	•	FocusmechanismV2.ino

Executing program

	•	Open the serial monitor
	•	It will show the current position on a scale of 1-1000
	•	For a new position: write a new value between 1-1000
	•	The stepper motor will move until the potentiometer matches with the input

Version History
	
	•	V1 (11/2022): Gear mechanism
	•	V2 (12/2022): Belt drive 



