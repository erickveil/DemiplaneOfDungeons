#ifndef ENCOUNTERGROUPING_H
#define ENCOUNTERGROUPING_H

#include "monsterfamily.h"
#include "dice.h"
#include "randomtable.h"
#include "familyfactory.h"



class EncounterGrouping
{
    GroupComposition _composition;
    Difficulty _difficultyLevel;
    MonsterFamily _monsterPool;
    QList<Monster> _roster;

public:
    EncounterGrouping();

    /**
     * @brief createEncounterMonsters
     *
     * This is the main method for selecting a random encounter.
     * The encounter is returned as a list of the monsters that are there.
     *
     * @param tier
     * @param environ
     * @return
     */
    QList<Monster> createEncounterMonsters(int tier, Environment environ);

    Difficulty getDifficulty();
    QList<Monster> getRoster();
    bool isNull();

    GroupComposition pickComp();
    Difficulty pickDifficulty(GroupComposition comp);
    MonsterFamily pickFamily(int tier, Environment environ);
    Monster pickBoss(MonsterFamily family);
    Monster pickMook(MonsterFamily family);


};

#endif // ENCOUNTERGROUPING_H
