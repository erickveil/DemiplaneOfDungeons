#include "encountergrouping.h"

EncounterGrouping::EncounterGrouping()
{

}

QList<Monster> EncounterGrouping::createEncounterMonsters()
{
    QList<Monster> monsterList;
    return monsterList;
}

GroupComposition EncounterGrouping::pickComp()
{
    return NullComp;
}

Difficulty EncounterGrouping::pickDifficulty(GroupComposition comp)
{
    return NullDifficulty;
}

MonsterFamily EncounterGrouping::pickFamily()
{
    MonsterFamily family;
    return family;
}

Monster EncounterGrouping::pickBoss()
{
    Monster boss;
    return boss;
}

Monster EncounterGrouping::pickMook()
{
    Monster mook;
    return mook;
}

