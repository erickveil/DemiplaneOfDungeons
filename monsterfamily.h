#ifndef FAMILYDETAILS_H
#define FAMILYDETAILS_H

#include "monster.h"

class MonsterFamily
{
public:
    QString FamilyName;
    int Tier;
    int Frequency;
    QList<Environment> EnvironmentList;

    Monster Boss;
    Monster Seargent;
    Monster Mook;
    Monster Pet;
    Monster Guardian;
    Monster Tank;
    Monster Rogue;
    Monster Healer;
    Monster Dps;
    Monster Caster;
    Monster Mount;

    MonsterFamily();
};

#endif // FAMILYDETAILS_H
