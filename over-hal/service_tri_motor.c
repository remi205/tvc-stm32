#include "stm32f3xx_hal.h"


extern "C" {
#include "spi.h"
#include "tri-motor.h"
};

#include "ParameterParser.h"

#include <string.h>
#include <stdio.h>


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
int ServiceStm32_Analyse( char* Input)
{
  int long ret;
  ParameterParser m_Parser;
  m_Parser.ParseString(Input);
  //Service->open_client();

  char  Response[80];

  // m_Parser contient les parametres du profile à appliquer
  char * Command =  m_Parser.GetString(0);
  bool SendResponse = true;
  bool Ack = false;
  if(!strcmp(Command, "set-speed"))
    {
      char units[20];
      strcpy( units, m_Parser.GetString(1));
      char speeds[20];
      strcpy( speeds, m_Parser.GetString(2));
      char direction[20];
      strcpy(direction,  m_Parser.GetString(3));

      ParameterParser UnitParser;
      UnitParser.ParseString(units);

      ParameterParser SpeedsParser;
      SpeedsParser.ParseString(speeds);

      ParameterParser DirectionParser;
      DirectionParser.ParseString(direction);

      for (int i = 0 ; i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch ( UnitParser.GetInteger(i))
            {
            case 1 :
              ret = tri_set_speed( &hspi1, SpeedsParser.GetInteger(i), DirectionParser.GetInteger(i));
              break;
            case 2 :
              ret = tri_set_speed( &hspi2, SpeedsParser.GetInteger(i), DirectionParser.GetInteger(i));
             break;
            case 3 :
              ret = tri_set_speed( &hspi3, SpeedsParser.GetInteger(i), DirectionParser.GetInteger(i));
            }
          tri_resume_motor(UnitParser.GetInteger(0), UnitParser.GetInteger(1), UnitParser.GetInteger(2));
        }

      Ack = true;
    }
  else if(!strcmp(Command, "stop"))
    {
      char units[20];
      strcpy( units, m_Parser.GetString(1));

      ParameterParser UnitParser;
      UnitParser.ParseString(units);

      for (int i = 0 ; i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch ( UnitParser.GetInteger(i))
            {
            case 1 :
              ret = tri_set_speed( &hspi1, 0, 0);
              break;
            case 2 :
              ret = tri_set_speed( &hspi2, 0, 0);
             break;
            case 3 :
              ret = tri_set_speed( &hspi3, 0, 0);
            }
          tri_resume_motor(UnitParser.GetInteger(0), UnitParser.GetInteger(1), UnitParser.GetInteger(2));
        }
      Ack = true;
    }
  else if(!strcmp(Command, "get-position"))
    {
      char units[20];
      strcpy( units, m_Parser.GetString(1));
      
      ParameterParser UnitParser;
      UnitParser.ParseString(units);
      
      char response_interne[80];
      
      for (int i = 0 ; i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch ( UnitParser.GetInteger(i))
            {
            case 1 :
              ret = sprintf(response_interne, "%d ", tri_get_position(&hspi1));
              break;
            case 2 :
              ret = sprintf(response_interne, "%d ", tri_get_position(&hspi2));
              break;
            case 3 :
              ret = sprintf(response_interne, "%d ", tri_get_position(&hspi3));
              break;
            }
        }
      strcat("1|~s\n", response_interne);
      SendResponse = false;
    }
  else if(!strcmp(Command, "get-state"))
    {
      char units[20];
      strcpy( units, m_Parser.GetString(1));
      
      ParameterParser UnitParser;
      UnitParser.ParseString(units);
      
      for (int i = 0 ; i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch ( UnitParser.GetInteger(i))
            {
            case 1 :
              Ack = tri_get_state(&hspi1);
              break;
            case 2 :
              Ack = tri_get_state(&hspi2);
              break;
            case 3 :
              Ack = tri_get_state(&hspi3);
            }
        }
      tri_resume_motor(UnitParser.GetInteger(0), UnitParser.GetInteger(1), UnitParser.GetInteger(2));
    }
  else if( ! strcmp(Command, "power-off"))
    {
      char units[20];
      strcpy( units, m_Parser.GetString(1));

      ParameterParser UnitParser;
      UnitParser.ParseString(units);
      
      for (int i = 0 ;  i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch (UnitParser.GetInteger(i))
            {
            case 1 :
              Ack = tri_power_off(&hspi1);
              break;
            case 2 :
              Ack = tri_power_off(&hspi2);
              break;
            case 3 :
              Ack = tri_power_off(&hspi3);
            }
        }
    }
  else if( !strcmp(Command, "set-position"))
    {
     char units[20];
     strcpy( units, m_Parser.GetString(1));
     
     char position[20];
     strcpy( position, m_Parser.GetString(2));

     char direction[20];
     strcpy(direction, m_Parser.GetString(3));

     char interpolation[20];
     strcpy(interpolation, m_Parser.GetString(4));
     
     ParameterParser UnitParser;
     UnitParser.ParseString(units);

     ParameterParser PositionParser;
     PositionParser.ParseString(position);

     ParameterParser DirectionParser;
     DirectionParser.ParseString(direction);
     
     ParameterParser InterpolationParser;
     InterpolationParser.ParseString(interpolation);
      
      for (int i = 0 ;  i < UnitParser.GetNumberOfParameters(); i++)
        {
          switch ( UnitParser.GetInteger(i))
            {
            case 1 :
              Ack = tri_set_position( &hspi1, PositionParser.GetInteger(i), DirectionParser.GetInteger(i),InterpolationParser.GetInteger(i));
              break;
            case 2 :
              Ack = tri_set_position( &hspi2, PositionParser.GetInteger(i), DirectionParser.GetInteger(i),InterpolationParser.GetInteger(i));
             break;
            case 3 :
              Ack = tri_set_position( &hspi3, PositionParser.GetInteger(i), DirectionParser.GetInteger(i),InterpolationParser.GetInteger(i));
            }
        }
      tri_resume_motor(UnitParser.GetInteger(0), UnitParser.GetInteger(1), UnitParser.GetInteger(2));
    }
    else if( ! strcmp(Command, "set-motor-parameter"))
      {
        int unit = m_Parser.GetInteger(1);
        float p1 = m_Parser.GetInteger(2);
        float p2 = m_Parser.GetInteger(3);
        float p3 = m_Parser.GetInteger(4);
        float p4 = m_Parser.GetInteger(5);
        float p5 = m_Parser.GetInteger(6);
        float p6 = m_Parser.GetInteger(7);
        
        switch ( unit )
          {
          case 1 :
            Ack = tri_set_motor_parameter(&hspi1, p1, p2, p3 , p4, p5, p6);
            break;
          case 2 :
            Ack = tri_set_motor_parameter(&hspi2, p1, p2, p3 , p4, p5, p6);
            break;  
          case 3 :
            Ack = tri_set_motor_parameter(&hspi3, p1, p2, p3 , p4, p5, p6);
            break; 
          }
      }
  
#if 0      
  if ( SendResponse && !Ack)
    Console->WriteString ("0");
  
  if ( SendResponse && Ack)
//    Console->WriteString("1");
#endif  
  return true;
}
