#ifndef FAMILYFACTORY_H
#define FAMILYFACTORY_H

#include "monsterfamily.h"
#include "monsterfactory.h"
#include <QList>

class FamilyFactory
{
public:
    FamilyFactory();


    static QList<MonsterFamily> createFamilyList();
    static MonsterFamily createAarakocraFamily();
    static MonsterFamily createAbolethFamily();
    static MonsterFamily createAngelFamily();


};

#endif // FAMILYFACTORY_H
