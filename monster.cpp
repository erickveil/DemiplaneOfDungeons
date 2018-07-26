#include "monster.h"

Monster::Monster()
{

}

Monster::Monster(QString name, int tier,
                 EncounterType encounterType,
                 QList<Environment> environmentList) :
    Name(name), Tier(tier), Type(encounterType),
    EnvironmentList(environmentList)
{

}

bool Monster::isNull()
{
    return Name.isEmpty();
}

