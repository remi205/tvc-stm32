#include <string.h>
#include <stdio.h>
#include <stdlib.h>
   
#define  get_digit(d) d + '0'

void format_integer( char *StringDigit , unsigned int Number)
{
  // pour chaque digit, recupere son code ascii, et l'accumeller dans une chaine 
  // que l'on finira par 0
  if ( Number < 10)
    {
      // 1 digit
      StringDigit[0] = get_digit(Number);
      StringDigit[1] = 0;
    }
  else if ( Number < 100)
    {
      // 2 digit
      StringDigit[1] = get_digit(Number % 10);
      StringDigit[0] = get_digit(Number / 10);
      StringDigit[2] = 0;
    }
  else if ( Number < 1000)
    {
      StringDigit[2] = get_digit (  Number % 10);
      StringDigit[1] = get_digit ( (Number / 10)  % 10);
      StringDigit[0] = get_digit ( (Number / 100) % 10);
      StringDigit[3] = 0;
    }
  else if   ( Number < 10000)
    {
      StringDigit[3] = get_digit (  Number % 10);
      StringDigit[2] = get_digit ( (Number / 10)   % 10);
      StringDigit[1] = get_digit ( (Number / 100)  % 10);
      StringDigit[0] = get_digit ( (Number / 1000) % 10);
      StringDigit[4] = 0;
    }
  else if   ( Number < 100000)
    {
      StringDigit[4] = get_digit (  Number % 10);
      StringDigit[3] = get_digit ( (Number / 10)   % 10);
      StringDigit[2] = get_digit ( (Number / 100)  % 10);
      StringDigit[1] = get_digit ( (Number / 1000) % 10);
      StringDigit[0] = get_digit ( (Number / 10000) % 10);
      StringDigit[5] = 0;
    }
}

unsigned int get_one_hex_integer( char ci)
{
  char c0;
  if ( ci > 'a' && ci <= 'f')
    c0 = ci - 87;
  else if ( ci > 'A' && ci <= 'F')
    c0 = ci - 55;
  else
    c0 = ci - 48;  
  
  return c0;
}

unsigned int get_hex_integer( char *str)
{
  return (get_one_hex_integer(str[0]) << 4) +  get_one_hex_integer(str[1]);
}

// 4 digit decimaux ; 16/05/2014
int tvc_atoi( char *s )
{
  if ( s[3] != 0 && s[2] != 0  && s[1] != 0)
    return (s[3] - 48) + (s[2] - 48) * 10 + (s[1] - 48) * 100 + (s[0]- 48) * 1000 ;
  if ( s[2] != 0  && s[1] != 0)
    return (s[2]- 48) + (s[1]- 48) * 10 + (s[0]- 48) * 100;
  else if ( s[1] != 0 )
    return (s[1]- 48) + (s[0]- 48) * 10;
  else
    return s[0]- 48;
}

void scan_address(char * StringToScan, char CharSep, unsigned char *Array, unsigned short Base)
{
   char *p, *prec;
   p = StringToScan;
   prec = p;
   unsigned char IndexResult = 0;
   char Temp[5];
   
   for ( int i = 0; i < strlen(StringToScan); i++) 
     {
       if (*p == CharSep)
         {
           strncpy( Temp , prec ,  p -prec);
           Temp[p-prec] = 0;
           
          // if ( Base == 16)
             //Array[IndexResult] = get_hex_integer(Temp);
          // else
             Array[IndexResult] = tvc_atoi(Temp);
           IndexResult++;
           prec = p+1;
         }
       p++;
     }
   // copy du dernier bout

   strcpy( Temp, prec);
   //if ( Base == 16)
   // Array[IndexResult] = get_hex_integer(Temp);
   //else
     Array[IndexResult] = tvc_atoi(Temp);
   
}
