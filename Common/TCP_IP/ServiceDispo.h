//
// Rémi Prud'homme - 2005
//
#pragma once

#include "ServiceUdp.h"

class ServiceDispo : public ServiceUdp
{
public :
    virtual bool Analyse();
    bool OpenService( unsigned short Port);
};
