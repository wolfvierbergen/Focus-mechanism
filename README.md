# Focus-mechanism

Focus mechanism for a thermal camera
A mechanism that turns a lens of a thermal camera and keeps it’s absolute position.

Description
The focus mechanism consists of a belt drive that turns the lens of a thermal camera.
The main component is a  stepper motor, a Nema 14 with dual axis: the front axis is used to turn a belt mechanism connected to the lens. The back axis is connected to a multi turn potentiometer, this is necessary for the absolute position control.

Getting Started
Hardware

	•	Arduino Uno
	•	DRV8825 stepper driver
	•	Nema 14 (dual axis)
	•	Mosaic core 9.1mm lens core

Firmware

	•	FocusmechanismV2.ino
	•	Upload to the Arduino Uno

Executing program

	•	Open the serial monitor
	•	It will show the current position on a scale of 1-1000
	•	For a new position simply write a new value between 1-1000
	•	The stepper motor will move there


Authors
Wolf Vierbergen
email: wolf.vierbergen@student.uantwerpen.be

Version History
	
	•	V1 (11/2022): Gear mechanism

	•	V2 (12/2022): Belt drive 



