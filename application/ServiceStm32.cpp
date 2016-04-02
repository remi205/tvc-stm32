//
//  Rémi Prud'homme, 2014
//
#include "ServiceStm32.h" 

extern "C" {

#include "../tvc-macros/BasicTypes.h"
#include "../over-hal/battery-measure.h"
#include "../over-hal/gpio_access.h"
#include "../over-hal/platform-parameters.h"
#include "../over-hal/motor_sud.h"
#include "../over-hal/ads1115.h"
#include "../over-hal/ads111x_access.h"  
#include "../over-hal/battery-measure.h"

void format_integer( char *StringDigit , unsigned int Number);
};

#include "config.h"
#include "udp_layer.h"
#include "../Common/Utils/ParameterParser.h"
#include <string.h>
#include "MotorThread.h"
#include "../over-hal/motor_sud.h"

extern I2C_HandleTypeDef hi2c1;
extern DescritionMotor ConfMotor[3];
extern char MotorName[3][8];
extern UART_HandleTypeDef *dev[3];

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
  else if ( ! strcmp(Command, "config-ads-channel"))
    {
      ConfigureAdsChannel((InputMultiplexer)m_Parser.GetInteger(1),
                          (ProgrammableGain)m_Parser.GetInteger(2),
                          (DataRate)m_Parser.GetInteger(3),
                          (Mode)m_Parser.GetInteger(4));
      Ack = true;
    }
  else if ( ! strcmp(Command, "ads-select"))
    {
      // permet de choisier l'adresse i2c du convertisseur.
      ads111x_select(m_Parser.GetInteger(1));
      Ack = true;
    }
   else if ( ! strcmp(Command, "get-measure"))    
     {
      char Num[8];
      
      unsigned long x;
      strcpy(Response,"1|");
      x = GetMeasure();
      format_integer (Num, x);
      strcat(Response, Num);
      Service->WriteString(Response);
      SendResponse = false;
    }
#else  
#if 0  
   else if (!strcmp(Command, "cmd-moteur-123"))
    {
      char * CmdMoteur = m_Parser.GetString(1);
      MotorsSendCommand((unsigned char *)CmdMoteur, strlen(CmdMoteur));

      // en modifiant la hal, on lancer les 3 dma 
      // avec le minimun de déphasage
      huart2.Instance->CR3 |= USART_CR3_DMAT;
      huart6.Instance->CR3 |= USART_CR3_DMAT;
      huart5.Instance->CR3 |= USART_CR3_DMAT;

      osSemaphoreRelease(ConfMotor[0].SemaphoreCommand);
      osSemaphoreRelease(ConfMotor[1].SemaphoreCommand);
      osSemaphoreRelease(ConfMotor[2].SemaphoreCommand);
      Ack = true;
    }
#endif  
   else if ( ! strcmp(Command, "cmd-moteur-1"))
    {
      char * CmdMoteur = m_Parser.GetString(1);
      MotorSendCommand((unsigned char *)CmdMoteur, strlen(CmdMoteur), &huart6);
      osSemaphoreRelease(ConfMotor[0].SemaphoreCommand);
      Ack = true;
    }
   else if ( ! strcmp(Command, "cmd-moteur-2"))
    {
      char * CmdMoteur = m_Parser.GetString(1);
      MotorSendCommand((unsigned char *)CmdMoteur, strlen(CmdMoteur), &huart2);
      osSemaphoreRelease(ConfMotor[1].SemaphoreCommand);
      Ack = true;
    }
   else if ( ! strcmp(Command, "cmd-moteur-3"))
    {
      char * CmdMoteur = m_Parser.GetString(1);
      
      MotorSendCommand((unsigned char *)CmdMoteur, strlen(CmdMoteur), &huart5);
      osSemaphoreRelease(ConfMotor[2].SemaphoreCommand);
      Ack = true;
    }
#endif
  if ( SendResponse && !Ack)
    Service->WriteString ("0");

  if ( SendResponse && Ack)
   Service->WriteString("1");

  return true;
}


