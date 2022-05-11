#include <linux/delay.h>
#include <linux/i2c.h>
#include "io_eeprom.h"



extern struct i2c_client  *ext_i2c_dev;

int eeprom_write_8byte(unsigned char *buf1){

	return 	i2c_smbus_write_i2c_block_data(ext_i2c_dev, 0, 8, buf1);

}

int eeprom_read_8byte(unsigned char *buf1){
	return i2c_smbus_read_i2c_block_data(ext_i2c_dev, 0, 8, buf1);
}
