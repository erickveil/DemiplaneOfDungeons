#include "monster.h"

Monster::Monster()
{

}

Monster::Monster(QString name, int tier, int frequency,
                 EncounterType encounterType,
                 QList<Environment> environmentList) :
    Name(name), Tier(tier), Frequency(frequency), Type(encounterType),
    EnvironmentList(environmentList)
{

}

bool Monster::isNull()
{
    return Name.isEmpty();
}

