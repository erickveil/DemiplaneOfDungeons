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

    Monster boss = pickBoss(family);
    if (!boss.isNull()) { monsterList.append(boss); }
    Monster mook = pickMook(family);
    if (!mook.isNull()) { monsterList.append(mook); }

    if (monsterList.size() == 0) { monsterList.append(family.Default); }

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
    QList<MonsterFamily> allFamilies = FamilyFactory::createFamilyList();
    RandomTable<MonsterFamily> table;
    for (int i = 0; i < allFamilies.size(); ++i) {
        MonsterFamily family = allFamilies.at(i);
        bool isCorrectTier = family.Tier == tier;
        bool isCorrectEnviron = false;
        for (int n = 0; n < family.EnvironmentList.size(); ++n) {
            Environment environTest = family.EnvironmentList.at(n);
            if (environTest != environ) { continue; }
            isCorrectEnviron = true;
            break;
        }
        if (isCorrectTier && isCorrectEnviron) {
            table.addEntry(family, family.Frequency);
        }
    }

    if (table.size() == 0) {
        MonsterFamily nullFamily;
        return nullFamily;
    }

    MonsterFamily selectedFamily = table.getRollTableEntry();

    return selectedFamily;
}

Monster EncounterGrouping::pickBoss(MonsterFamily family)
{
    return family.Boss;
}

Monster EncounterGrouping::pickMook(MonsterFamily family)
{
    return family.Mook;
}

