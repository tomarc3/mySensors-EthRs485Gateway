/**
 * The MySensors Arduino library handles the wireless radio link and protocol
 * between your home built sensors/actuators and HA controller of choice.
 * The sensors forms a self healing radio network with optional repeaters. Each
 * repeater and gateway builds a routing tables in EEPROM which keeps track of the
 * network topology allowing messages to be routed to nodes.
 *
 * Created by Henrik Ekblad <henrik.ekblad@mysensors.org>
 * Copyright (C) 2013-2015 Sensnology AB
 * Full contributor list: https://github.com/mysensors/Arduino/graphs/contributors
 *
 * Documentation: http://www.mysensors.org
 * Support Forum: http://forum.mysensors.org
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 *******************************
 *
 * DESCRIPTION
 * The RS485 Gateway bridges the RS485 bus to the Ethernet and connects to a remote controller using TCP.
 *
 * Wire connections (OPTIONAL):
 * - Inclusion button should be connected between digital pin 3 and GND
 * - RX/TX/ERR leds need to be connected between +5V (anode) and digital pin 6/5/4 with resistor 270-330R in a series
 *
 * LEDs (OPTIONAL):
 * - RX (green) - blink fast on radio message recieved. In inclusion mode will blink fast only on presentation recieved
 * - TX (yellow) - blink fast on radio message transmitted. In inclusion mode will blink slowly
 * - ERR (red) - fast blink on error during transmission error or recieve crc error
 *
 * If your Arduino board has additional serial ports
 * you can use to connect the RS485 module.
 * Otherwise, the gateway uses AltSoftSerial to handle two serial
 * links on one Arduino. Use the following pins for RS485 link
 *
 *  Board          Transmit  Receive   PWM Unusable
 * -----          --------  -------   ------------
 * Teensy 3.0 & 3.1  21        20         22
 * Teensy 2.0         9        10       (none)
 * Teensy++ 2.0      25         4       26, 27
 * Arduino Uno        9         8         10
 * Arduino Leonardo   5        13       (none)
 * Arduino Mega      46        48       44, 45
 * Wiring-S           5         6          4
 * Sanguino          13        14         12
 *
 * Alternatively use the RS485/Ethernet Din rail module by Tom.
 *
 * Created by Thomas Kocher <kocher@devzone.ch>
 * Copyright (C) 2017-2018 by Tom
 * 
 */

// Enable debug prints to serial monitor
#define MY_DEBUG

// Define this for verbose debug prints related to the gateway transport. 
#define MY_DEBUG_VERBOSE_GATEWAY


/**
 * Configure RS485 transport
 */
// Enable RS485 transport layer
#define MY_RS485

// Define this to enables DE-pin management on defined pin
#define MY_RS485_DE_PIN 2

// Set RS485 baud rate to use
#define MY_RS485_BAUD_RATE 9600


/**
 * Configure Ethernet transport
 */
// Enable gateway ethernet module type
#define MY_GATEWAY_W5100

// The MAC address can be anything you want but should be unique on your network.
// Newer boards have a MAC address printed on the underside of the PCB, which you can (optionally) use.
#define MY_MAC_ADDRESS 0xCA, 0xFE, 0xAF, 0xFE, 0x00, 0x02

// Static ip address of gateway (if this is not defined, DHCP will be used).
#define MY_IP_ADDRESS 192,168,1,21

// If this is defined, gateway will act as a client trying to contact controller on MY_PORT using this IP address.
#define MY_CONTROLLER_IP_ADDRESS 192,168,1,42

// The Ethernet TCP/UDP port to open on controller or gateway.
#define MY_PORT 5003


/**
 * Confiugre inclusion mode
 */
// Enable inclusion mode
// #define MY_INCLUSION_MODE_FEATURE
// Enable Inclusion mode button on gateway
// #define MY_INCLUSION_BUTTON_FEATURE
// Set inclusion mode duration (in seconds)
// #define MY_INCLUSION_MODE_DURATION 60
// Digital pin used for inclusion mode button
// #define MY_INCLUSION_MODE_BUTTON_PIN  3


/**
 * Configure status LEDs
 */
// Set blinking period
#define MY_DEFAULT_LED_BLINK_PERIOD 300

// Flash leds on rx/tx/err
#define MY_DEFAULT_ERR_LED_PIN 4  // Error led pin
#define MY_DEFAULT_TX_LED_PIN  5  // the PCB, on board LED
#define MY_DEFAULT_RX_LED_PIN  6  // Receive led pin


/**
 * Gateway code
 */
//#include <Ethernet.h> // use with Wiznet W5100 Ethernet modules
#include <Ethernet2.h> // use with Wiznet W5500 Ethernet modules
#include <MySensors.h>

void setup() {
	// Setup locally attached sensors
}

void presentation() {
	// Present locally attached sensors
}

void loop() {
	// Send locally attached sensor data here
}
