# mySensors-EthRs485Gateway

The RS485 Gateway bridges the RS485 bus to the Ethernet and connects to a remote controller using the mySensors protocol over TCP.

This sketch uses the mySensors library by Henrik Ekblad, Sensnology AB.
* Documentation: http://www.mysensors.org
* Support Forum: http://forum.mysensors.org

It can be used with WIZnet W5100 or W5500 Ethernet modules.

The gateway uses AltSoftSerial to handle two serial links (i.e. to connect to the RS485 driver) on one Arduino. Use the following pins for RS485 link


 | Board            | Transmit | Receive | PWM Unusable |
 | ---------------- | --------:| -------:| ------------ |
 | Teensy 3.0 & 3.1 | 21       | 20      | 22           |
 | Teensy 2.0       |  9       | 10      | (none)       |
 | Teensy++ 2.0     | 25       |  4      | 26, 27       |
 | Arduino Uno      |  9       |  8      | 10           |
 | Arduino Leonardo |  5       | 13      | (none)       |
 | Arduino Mega     | 46       | 48      | 44, 45       |
 | Wiring-S         |  5       |  6      | 4            |
 | Sanguino         | 13       | 14      | 12           |

 Alternatively use the RS485/Ethernet Din rail module by Tom.
 
 ## Known Bugs

 The gateway occasionally locks up. It still responds to ping requests, but the main loop is blocked. There are no log messages on the serial port.
 It is hard to redict when it happens. Sometimes after a view hours, somtimes it works for weeks.

 It looks like I'm not the only one having this problem:
 * https://forum.mysensors.org/topic/1004/watchdog-on-ethernet-gateway
 * https://forum.mysensors.org/topic/4760/watchdog-on-2-0

 I will enable a watchdog as a workaround until the bug is fixed.

 ## Changelog
 * v0.1.0 ()

    Initial version.

## License
    Copyright (C) 2018 by Tom Kocher

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
