//
//  Rémi Prud'homme - 2002-2004
//

#pragma once

#define NUMBER_OF_PARAMETER 8

class ParameterParser
  {
    char m_String[NUMBER_OF_PARAMETER][40];

    // Caractere de séparation
    char m_seps[2];

    int m_NumberOfParameters;

  public :
    ParameterParser(char * seps = (char *)"|");


    int GetNumberOfParameters()
      {
      return m_NumberOfParameters;
      };

    int ParseString ( char * InputString );

    char * GetString( int Index);
    int GetInteger ( int Index );

    int GetHex( int Index );
    float  GetFloat ( int Index );
    double  GetDouble ( int Index );

  };
