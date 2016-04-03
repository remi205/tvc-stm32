//
//  Rémi Prud'homme, 2014
//
#include "ServiceStm32.h" 

extern "C" {
#include "../over-hal/gpio_access.h"

void format_integer( char *StringDigit , unsigned int Number);
};

#include "config.h"
#include "udp_layer.h"
#include "../Common/Utils/ParameterParser.h"
#include <string.h>

////////////////////////////////////////////////////////////////////////
//  Function : Analyse
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : analyse des commandes et traitement
//
/////////////////////////////////////////////////////////////////////////
bool ServiceStm32_Analyse( udp * Service, char* Input)
{

  ParameterParser m_Parser;
  m_Parser.ParseString(Input);  
  Service->open_client();

  char  Response[80];

  // m_Parser contient les parametres du profile à appliquer
  char * Command =  m_Parser.GetString(0);
  bool SendResponse = true;
  bool Ack = false;
  //int ret;

  if( ! strcmp(Command,"get-hostname"))
    {
     char * hostname  = platform_get_hostname();

     strcpy(Response,"1|");
     strcat(Response, hostname);
     
     Service->WriteString( Response );
     SendResponse = false; 
    }
#ifdef SENSOR
  else if( ! strcmp(Command,"gpio-set"))
    {
      unsigned short gpio_number = m_Parser.GetInteger(1);
      gpio_set(gpio_number);
      Ack = true;
    }
  else if( ! strcmp(Command,"gpio-reset"))
    {
      unsigned short gpio_number = m_Parser.GetInteger(1);
      gpio_reset(gpio_number);
      Ack = true;
    }
  else if( ! strcmp(Command,"gpio-direction"))
    {
      unsigned short gpio_number = m_Parser.GetInteger(1);
      char * s =  m_Parser.GetString(2);
      io_direction dir;
      
      if (! strcmp(s,"IN"))
        dir = INPUT;
      else
        dir = OUTPUT;
      
      gpio_direction(gpio_number, dir);
      Ack = true;
    }
  else if( ! strcmp(Command,"gpio-get"))
    {
      unsigned short gpio_number = m_Parser.GetInteger(1);
      unsigned state = gpio_get(gpio_number);
      
      if ( state )
        strcpy(Response, "1|high");
      else
        strcpy(Response, "1|low");
      
      Service->WriteString(Response);
      SendResponse = false; 
    }

  else if( ! strcmp(Command,"i2c-write"))
    {
      unsigned char reg = m_Parser.GetInteger(1);
      unsigned long Data = m_Parser.GetInteger(2);
      unsigned int len = m_Parser.GetInteger(3);
      // port, device, register, data

      HAL_I2C_Master_Transmit_IT( &hi2c1 , reg , (uint8_t*)&Data, len);
     }
  else if( ! strcmp(Command,"i2c-read"))
    {
      unsigned char reg = m_Parser.GetInteger(1);
      unsigned int len = m_Parser.GetInteger(2);
      unsigned long Data;
      // port, device, register
      HAL_I2C_Master_Receive_IT(&hi2c1 , reg ,(uint8_t*)&Data, len);
      // y a bon      
      char Num[8];
      strcpy(Response,"1|");
      format_integer (Num,Data);
      strcat(Response, Num);
      Service->WriteString(Response); 
      SendResponse = false;     
    }
#endif
  if ( SendResponse && !Ack)
    Service->WriteString ("0");

  if ( SendResponse && Ack)
   Service->WriteString("1");

  return true;
}


