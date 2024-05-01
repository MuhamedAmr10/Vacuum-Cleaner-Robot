# Vacuum-Cleaner-Robot
# Mines-Detector-Robot

###### An AVR project

<br/>

## Introduction 

I built my project using ATmega32 , as ATmega32 is easy to program AVR controller. With appreciable program memory it can satisfy most EMBEDDED SYSTEMS.
and writing code using C and Embedded C Programming.

#### Objective
cleaning a floor , removing dust giving more free time and comfort


#### Cleaning Mechanism
Fan motor is controled using power transistor (bjt) by sending signal using Bluetooth module ciruit closed and fan is on 

##### Here you can see how i made protable vacuum cleaner 
[Design-Vacuum-cleaner](https://www.youtube.com/watch?v=hHIIWpZcYNs&t=204s)

#### Vision Mechanism
Esp32-cam is responsible for vision by using it's wifi function , i program it using Arduino IDE

###### Here you can see how i programe it 
[Programming-Esp32-Cam](https://www.youtube.com/watch?v=7-3piBHV1W0)
<br/>

#### Full description of the module

[![Project Video]()


<br />
<br />

## Table of contents

- ##### Requirements
- ##### Recommended modules
- ##### Features
- ##### Installation
- ##### Configuration
- ##### Road Map
- ##### Simulation

<br />
<br />

## Requirements

##### This module requires the following modules:

[ROBOT](https://electra.store/product/robot-chassis-4-gear-motors-4-wheels-random-color-chassis/)

[ATMEGA32](https://www.ram-e-shop.com/shop/atmega32a-pu-atmega32a-u-6528)


[MOTOR-Drive](https://www.ram-e-shop.com/shop/kit-l298-red-l298-module-red-board-dual-h-bridge-motor-driver-using-l298n-7084)

[FAN-MOTOR](https://circuit-electronics.com/product/r140-dc-motor-3-12v-12000rpm/)

[THREE-lEAF-FAN](https://circuit-electronics.com/product/three-leaf-fan/)

[BLUETOOTH-Module](https://www.ram-e-shop.com/shop/kit-bluetooth-hc05-normal-hc-05-bluetooth-module-normal-6674)

[USBASP](https://www.ram-e-shop.com/shop/prog-avr-serial-atmel-avr-usbasp-programmer-china-6290)

- 12v battery for Motor Drive and Fan Motor
  
- bjt for controlling Fan Motor
  

  ![image](https://github.com/MuhamedAmr10/Vacuum-Cleaner-Robot/assets/168368256/c9477b2d-1b19-4dee-af63-02072c97d638)

<br />
<br />

## Recommended modules





- [esp32-cam](https://www.ram-e-shop.com/shop/kit-esp32-camera-ov2640-esp32-cam-development-board-with-camera-ov2640-7995) : For vision

- [Arduino-nano](https://circuit-electronics.com/product/arduino-nano/) : for burning esp32 cam code

- AVR Development Board

<img src="https://github.com/MuhamedAmr10/Mines-Detector-Robot/assets/168368256/40c4151e-739f-4d89-8f8d-7124775af552" width="200" >

<br />
<br />

## Features

- camera for vision
- Large working area
- 12000 RPM Fan Motor
- Remote access "Bluetooth"

<br />
<br />

## Installation

- Installing a text editor : For writting and editing code like Notepad++ & Visual studio code

- Installing Eclipse : (C/C++ Development Tools) plug-ins allow to create, build, debug ,burn  and have many features

- Installing Proteus : For simulation and test inputs & outputs

###### Step one :

Writing a C Project using text editor or eclipse 

###### Step two :

Making C Project  in eclipse , then choose C project type AVR Cross target application , then choose ATmega32 and finaly adjust freq 8000000 

###### step three :
<div>
<img src="https://github.com/MuhamedAmr10/Mines-Detector-Robot/assets/168368256/7947e4de-b96e-47d7-ab24-59ef68977947" width="400" >
<img src="https://github.com/MuhamedAmr10/Mines-Detector-Robot/assets/168368256/ff4ededc-b297-4760-add1-4b6672840b27" width="400" >
</div>

###### Step four :

Closing unrelated project ,then writing Or copy Code to C project ,then save code and finaly build 

###### Step five :

Making simulation in proteus to test project

###### step six :

Burn code To Atmega32 using USBASP 

<br />
<br />

## Configuration

###### ALL HAL Drivers Have Configurations

##### HAL Driver :
  
<div>
<img src="https://github.com/MuhamedAmr10/Vacuum-Cleaner-Robot/assets/168368256/346d3af0-7961-4122-8c36-312acf411666" width="400" height ="200" >
<img src="https://github.com/MuhamedAmr10/Mines-Detector-Robot/assets/168368256/e9afa9bd-a623-4409-b621-fbde376007ad" width="400" height ="200" >
</div>

###### Ex Configuration of HMOTOR  :

```
#define HMOTOR_PORT  		MDIO_PORTA
#define HMOTOR_PIN_INT1		5
#define HMOTOR_PIN_INT2		4
#define HMOTOR_PIN_INT3		3
#define HMOTOR_PIN_INT4		2
#define HMOTOR_PIN_ENA		1
#define HMOTOR_PIN_ENB		0

```

<br />
<br />
  
## Road Map


###### Software road map
<br />

<img src="https://github.com/MuhamedAmr10/Vacuum-Cleaner-Robot/assets/168368256/492b60d1-e9de-4368-8bcd-fdc8de7f55d5" >

<br />
<br />
<br />
<br />

## Simulation

###### My simulation using proteus
[Simulation](https://drive.google.com/drive/u/0/folders/1aevleRuMcT-sCoZyqtTnewIL26lUJ_Ju)

<br />
<br />
















  














