# PhotonLCDWebControl
Use HTTP post page to control text on a LCD display connected to a Particle Photon

Purpose:
========
Control the text shown on the  photon-connected LCD using a HTML web-page so that it can be changed remotely.

Hardware Setup:
===============
Wire LCD like so:
LCD RS pin to digital pin D0
LCD EN pin to digital pin D1
LCD D4 pin to digital pin D2
LCD D5 pin to digital pin D3
LCD D6 pin to digital pin D4
LCD D7 pin to digital pin D5
10K resistor:
ends to +5V and ground
wiper to LCD VO pin (pin 3)
connect R/W (pin 5) to ground

(Optional) Wire buzzer/led to analog 5 & ground  

Hardware Requirements:
======================
-Particle Photon (or Spark Core)  
-LCD display that is compatible with the Hitachi HD44780 driver (most are)  
-Ability to open or host an HTML file  
-Optional - potentiometer to control LCD contrast  
-Optional - a led or buzzer to be remotely triggered in addition to the LCD text  
