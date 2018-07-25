#ifndef MONSTER_H
#define MONSTER_H

#include <QList>
#include <QString>

enum EncounterType {NullEncounterType, Individual, Family, Maleable, Mix, Npc};
enum Environment {NullEnvironment, Dungeon, Underdark, Urban, Roads, Grasslands,
                  Coastal, Hill, Forest, Mountain, Swamp, Desert, Tundra, Demon,
                  Devil, Fiend, Fey, Elemental, Earth, Air, Fire, Water,
                  Ethereal, Astral, Guardian, Magical, Construct, Undead,
                  Shadow, Divine, Law, Chaos};

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
