
#pragma once

#define scan_address_ip(s,a) scan_address (s, '.', a, 10)
#define scan_address_mac(s,a) scan_address(s, ':', a, 16)

void scan_address(char * StringToScan, char CharSep, unsigned char *Array, int Base);
