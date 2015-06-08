//
//  Rémi Prud'homme - 2000-2005
//



#pragma once

#define NUMBER_OF_PARAMETER 100

class ParameterParserDyn
  {
    char * m_String ;

    // Caractere de séparation
    char m_seps[3];

    int m_NumberParameters;

    
    unsigned int m_NbParam ;
    unsigned int m_SizeOfParam;


  public :
    ParameterParserDyn( int NbParam = 20, int SizOfParam = 80, char * seps = "|");
    ~ParameterParserDyn();

    int GetNumberParameters()
      {
      return m_NumberParameters;
      };

    int ParseString ( char * InputString );

    char * GetString( int Index);
    int GetInteger ( int Index );
    float  GetFloat ( int Index );
    double  GetDouble ( int Index );

  };
