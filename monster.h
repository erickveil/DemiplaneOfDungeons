#ifndef MONSTER_H
#define MONSTER_H

#include <QList>
#include <QString>

#include "randomtable.h"

class Monster
{
public:
    QString Name;
    int Tier;
    int Frequency;
    int Qty;

    EncounterType Type;
    QList<Environment> EnvironmentList;

    Monster();
    Monster(QString name, int tier, int frequency, EncounterType encounterType,
            QList<Environment> environmentList);
    bool isNull();
};

#endif // MONSTER_H
