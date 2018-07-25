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

public:
    EncounterGrouping();

    QList<Monster> createEncounterMonsters();

    GroupComposition pickComp();
    Difficulty pickDifficulty(GroupComposition comp);
    MonsterFamily pickFamily();
    Monster pickBoss();
    Monster pickMook();


};

#endif // ENCOUNTERGROUPING_H
