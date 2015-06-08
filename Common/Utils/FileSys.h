
#pragma once

bool read_sys_class(char * Periph, char * Propertie , char * value);
bool write_sys_class(char * Periph, char * Propertie ,  char * value);


#define SYSFS_DIR "/sys/class/"
#define POWER "power_supply/ab8500_fg/"
