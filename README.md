# PhotonLCDWebControl
Use HTTP post page to control text on a LCD display connected to a Particle Photon

Purpose:
Control the text shown on the  photon-connected LCD using a HTML web-page so that it can be changed remotely.

Hardware Setup:
Wire LCD like so: http://jongallant.com/images/blog/60df869b7a82_1178E/image_thumb.png
(Optional) Wire buzzer/led to analog 5 & ground

Hardware Requirements:
-Particle Photon (or Spark Core)
-LCD display that is compatible with the Hitachi HD44780 driver (most are)
-Ability to open or host an HTML file
-Optional - potentiometer to control LCD contrast
-Optional - a led or buzzer to be remotely triggered in addition to the LCD text