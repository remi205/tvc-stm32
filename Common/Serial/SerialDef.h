//
// FractalConcept - 2002-2004
// Rémi Prud'homme
//

#pragma once

#define MASK_SIZE 0x0F

// CONSTANTES D'ERREUR
#define PROTOCOL_TIMEOUT  0x0080
#define COMM_FRAMMING     0x0040
#define COMM_OVERUN       0x0020
#define COMM_PARITY       0x0010
#define PROTOCOL_CHECKSUM 0x0004
#define PROTOCOL_ERROR    0x0002
#define COMMAND_UNKNOWN   0x0001 


#define CBR_9600   B9600
#define CBR_19200  B19200
#define CBR_38400  B38400
#define CBR_56000  B57600
#define CBR_115200 B115200 



#define ONESTOPBIT  1
#define TWOSTOPBUT  CSTOPB

#define NOPARITY    0
#define PARITY_ODD  PARODD       
#define PARITY_EVEN PAREN 
