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
    QString Source;

    EncounterType Type;
    QList<Environment> EnvironmentList;

    Monster();
    Monster(QString name, int tier, EncounterType encounterType,
            QList<Environment> environmentList, QString source);
    bool isNull();
};

#endif // MONSTER_H
