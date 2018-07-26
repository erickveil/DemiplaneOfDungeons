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
    RandomTable<GroupComposition> table;

    table.addEntry(SoloMook, 4);
    table.addEntry(SoloBoss, 1);
    table.addEntry(BossWithMooks, 2);
    table.addEntry(MookGroup, 8);

    return table.getRollTableEntry();
}

Difficulty EncounterGrouping::pickDifficulty(GroupComposition comp)
{
    RandomTable<Difficulty> table;

    if (comp == SoloMook) {
        table.addEntry(Easy, 2);
        table.addEntry(Moderate);
    }
    else if (comp == SoloBoss) {
        table.addEntry(Moderate);
        table.addEntry(Hard, 2);
    }
    else if (comp == BossWithMooks) {
        table.addEntry(Hard);
        table.addEntry(Deadly);
    }
    else if (comp == MookGroup) {
        table.addEntry(Easy);
        table.addEntry(Moderate);
    }

    return table.getRollTableEntry();
}

MonsterFamily EncounterGrouping::pickFamily(int tier, Environment environ)
{
    // TODO: Flesh out monster and family factories a little before coming back
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

