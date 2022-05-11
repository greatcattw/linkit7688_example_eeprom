Object : example of EEPROM AT24C02 proc driver

Test HW: Linkit 7688
Test SW: openwrit 3.18.109

Usage:
	copy hello_eeprom to openwrt/package/kernel
	make package/hello_eeprom/compile V=s
	opkg install ipk to Linkit 7688

	echo "0123456" > /proc/HELLO_EEPROM
	cat /proc/HELLO_EEPROM


If the code help you, how about buy street cat a fish can ?
