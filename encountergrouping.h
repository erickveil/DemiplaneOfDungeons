#ifndef ENCOUNTERGROUPING_H
#define ENCOUNTERGROUPING_H

#include "monsterfamily.h"

enum GroupComposition {NullComp, SoloMook, SoloBoss, BossWithMooks, MookGroup};

enum Difficulty {NullDifficulty, Easy, Moderate, Hard, Deadly};

class EncounterGrouping
{
    GroupComposition _composition;
    Difficulty _difficultyLevel;
    MonsterFamily _monsterPool;
    QList<Monster> _roster;

public:
    EncounterGrouping();

    QList<Monster> createEncounterMonsters(int tier, Environment environ);
    Difficulty getDifficulty();
    QList<Monster> getRoster();
    bool isNull();

    GroupComposition pickComp();
    Difficulty pickDifficulty(GroupComposition comp);
    MonsterFamily pickFamily(int tier, Environment environ);
    Monster pickBoss(MonsterFamily family, GroupComposition comp);
    Monster pickMook(MonsterFamily family, GroupComposition comp);


};

#endif // ENCOUNTERGROUPING_H
