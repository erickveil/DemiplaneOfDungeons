#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H

#include "monster.h"

class MonsterFactory
{
public:
    MonsterFactory();

    static Monster createAarakocra();
    static Monster createAboleth();
    static Monster createDeva();
    static Monster createPlanetar();
    static Monster createSolar();


};

#endif // MONSTERFACTORY_H
