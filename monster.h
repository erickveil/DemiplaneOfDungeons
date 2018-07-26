#ifndef MONSTER_H
#define MONSTER_H

#include <QList>
#include <QString>

#include "randomtable.h"

class Monster
{
public:
    QString Name;
    int Qty;
    int Tier;

    EncounterType Type;
    QList<Environment> EnvironmentList;

    Monster();
    Monster(QString name, int tier, EncounterType encounterType,
            QList<Environment> environmentList);
    bool isNull();
};

#endif // MONSTER_H
