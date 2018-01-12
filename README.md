# madness-detector
Arduino-based madness detector. It is a useful tool that informs when a person close to you presents a hidden madness.

## Bill of materials
* VU meter
* 2x arduino bluetooth shield HT06
* 2x pushbuttons
* 2x ATmega328P integrated circuits
* 2x prototyping boards

## Building steps
### Build main board
Main board presents an ATmega328P circuit with arduino bootloader, a power supply circuit, a VU-meter and a 
### Build remote control board
### Flash arduino bootloader in ATmega integrated circuits
Main article: https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard
1. Download bootloader files from https://www.arduino.cc/en/uploads/Tutorial/breadboard-1-6-x.zip for Arduino IDE >= 1.6.0. For older IDE versions, refer to the main source article.
2. Create a "hardware" sub-folder in your Arduino sketchbook folder (whose location you can find in the Arduino preferences dialog). If you've previously installed support for additional hardware configuration, you may already have a "hardware" folder in your sketchbook.
3. Move the breadboard folder from the zip archive to the "hardware" folder of your Arduino sketchbook.
4. Restart the Arduino software.
5. You should see "ATmega328 on a breadboard (8 MHz internal clock)" in the Tools > Board menu.

Once you've done this, you can burn the bootloader and upload programs onto your ATmega328 as described above. Be sure to select "ATmega328 on a breadboard (8 MHz internal clock)" when burning the bootloader. (If you select the wrong item and configure the microcontroller to use an external clock, it won't work unless you connect one.)

Following image shows how to burn the bootloader:

![Bootloader burning wirings](https://www.arduino.cc/en/uploads/Tutorial/SimpleBreadboardAVR.png)

Following image shows how to upload sketches to an ATmega on a breadboard:

![Sketch flashing](https://www.arduino.cc/en/uploads/Tutorial/ArduinoUSBSerialSimple.png)

### Flash sketches into integrated circuits
