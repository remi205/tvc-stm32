//
// Rémi Prud'homme
//


#include "stdafx.h"
#include "ParameterParser.h"

//#include "TraceFunction.h"

#define strcpy_s strcpy

/////////////////////////////////////////////////////////////////////////
//  Function : ParameterParser
//
//  IN   :  
//          
//  OUT  : 
//  RET  : 
//
//  Notes : initialise tous les slot à zéro
//
/////////////////////////////////////////////////////////////////////////
ParameterParser::ParameterParser( char *Seps )
  {

  m_NumberOfParameters = 0;
  strcpy( m_seps,Seps) ;
  for ( int i = 0; i < NUMBER_OF_PARAMETER; i++)
    strcpy(m_String[i], "");
  }



/////////////////////////////////////////////////////////////////////////
//  Function : ParseString
//
//  IN   :  InputString, la chaine à parsée
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Parse la sting en n sous string qui sont rangées dans
//          un slot
//
/////////////////////////////////////////////////////////////////////////
int ParameterParser::ParseString ( char * InputString )
  {
   char *token;
   int Index = 0;

   // Establish string and get the first token
   token = strtok( InputString, m_seps );

   while( token != NULL )
     {
       strcpy( m_String[Index], token);

       /* Get next token: */
       token = strtok( NULL, m_seps );
       Index++;
     }

   return Index;
  }


/////////////////////////////////////////////////////////////////////////
//  Function : GetString
//
//  IN   :  Index : index du slot considéré
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Retourne le slot désigné par l'index sous la forme 
//          d'une chaine de caractères.
//
/////////////////////////////////////////////////////////////////////////
char * ParameterParser::GetString( int Index)
  {
    return m_String[Index];
  }


/////////////////////////////////////////////////////////////////////////
//  Function : GetInteger
//
//  IN   :  Index : index du slot considéré
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Retourne le slot désigné par l'index sous la forme 
//          d'un entier.
//
/////////////////////////////////////////////////////////////////////////
int ParameterParser::GetInteger ( int Index )
  {
    return atoi( GetString(Index));
  }


/////////////////////////////////////////////////////////////////////////
//  Function : GetFloat
//
//  IN   :  Index : index du slot considéré
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Retourne le slot désigné par l'index sous la forme 
//          d'un flotant.
//
/////////////////////////////////////////////////////////////////////////
float  ParameterParser::GetFloat ( int Index )
{
  return (float )atof( GetString(Index));
}


/////////////////////////////////////////////////////////////////////////
//  Function : GetDouble
//
//  IN   :  Index : index du slot considéré
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Retourne le slot désigné par l'index sous la forme 
//          d'un double.
//
/////////////////////////////////////////////////////////////////////////
double  ParameterParser::GetDouble ( int Index )
{
  return atof( GetString(Index));
}

/////////////////////////////////////////////////////////////////////////
//  Function : GetHex
//
//  IN   :  Index : index du slot considéré
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Retourne le slot désigné par l'index sous la forme 
//          d'un entier.
//
/////////////////////////////////////////////////////////////////////////
int  ParameterParser::GetHex( int Index )
{
  int res;
  sscanf(GetString(Index), "%x",&res);
  return res;
}



