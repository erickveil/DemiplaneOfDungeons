#include "encountergrouping.h"

EncounterGrouping::EncounterGrouping()
{

}

QList<Monster> EncounterGrouping::createEncounterMonsters(int tier,
                                                          Environment environ)
{
    QList<Monster> monsterList;
    GroupComposition comp = pickComp();
    _composition = comp;
    Difficulty difficulty = pickDifficulty(comp);
    _difficultyLevel = difficulty;
    MonsterFamily family = pickFamily(tier, environ);
    _monsterPool = family;

    Monster boss = pickBoss(family, comp);
    if (!boss.isNull()) { monsterList.append(boss); }
    Monster mook = pickMook(family, comp);
    if (!mook.isNull()) { monsterList.append(mook); }

    _roster = monsterList;
    return monsterList;
}

Difficulty EncounterGrouping::getDifficulty()
{
    return _difficultyLevel;
}

QList<Monster> EncounterGrouping::getRoster()
{
    return _roster;
}

bool EncounterGrouping::isNull()
{
    return _roster.isEmpty();
}

GroupComposition EncounterGrouping::pickComp()
{
    return NullComp;
}

Difficulty EncounterGrouping::pickDifficulty(GroupComposition comp)
{
    return NullDifficulty;
}

MonsterFamily EncounterGrouping::pickFamily(int tier, Environment environ)
{
    MonsterFamily family;
    return family;
}

Monster EncounterGrouping::pickBoss(MonsterFamily family, GroupComposition comp)
{
    Monster boss;
    return boss;
}

Monster EncounterGrouping::pickMook(MonsterFamily family, GroupComposition comp)
{
    Monster mook;
    return mook;
}

