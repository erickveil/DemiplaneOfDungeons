#include "monster.h"

Monster::Monster()
{

}

Monster::Monster(QString name, int tier,
                 EncounterType encounterType,
                 QList<Environment> environmentList, QString source) :
    Name(name), Tier(tier), Type(encounterType),
    EnvironmentList(environmentList), Source(source)
{

}

bool Monster::isNull()
{
    return Name.isEmpty();
}

