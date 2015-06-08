//
//  Rémi Prud'homme - 2000-2005
//


#include "stdafx.h"

#include "ParameterParserDyn.h"
#include "TraceFunction.h"



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
ParameterParserDyn::ParameterParserDyn( int NbParam , int SizeOfParam,  char *Seps )
  {

  m_NumberParameters = 0;
  strcpy( m_seps, Seps) ;

  m_String = ( char *) malloc(NbParam   * SizeOfParam );
  m_NbParam = NbParam;
  m_SizeOfParam = SizeOfParam;

  for ( int i = 0; i < NbParam; i++)
    m_String[i * SizeOfParam] = '\0';
  }


ParameterParserDyn::~ParameterParserDyn()
{
  free( m_String);
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
int ParameterParserDyn::ParseString ( char * InputString )
  {
   char *token;
   int Index = 0;

   // Establish string and get the first token
   token = strtok( InputString, m_seps );

   while( token != NULL )
     {
       strcpy ( &m_String[Index * m_SizeOfParam], token);

       /* Get next token: */
       token = strtok( NULL, m_seps );
       Index++;
       m_NumberParameters++;
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
char * ParameterParserDyn::GetString( int Index)
  {
    return &m_String[Index * m_SizeOfParam];
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
int ParameterParserDyn::GetInteger ( int Index )
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
float  ParameterParserDyn::GetFloat ( int Index )
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
double  ParameterParserDyn::GetDouble ( int Index )
{
  return atof( GetString(Index));
}



