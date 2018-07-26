#include "familyfactory.h"

FamilyFactory::FamilyFactory()
{

}

QList<MonsterFamily> FamilyFactory::createFamilyList()
{
    QList<MonsterFamily> list;

    list.append(createAarakocraFamily());

    return list;
}

MonsterFamily FamilyFactory::createAarakocraFamily()
{
    MonsterFamily f;


    f.FamilyName = "Aarakocra Preyhunters";
    f.Tier = 1;
    f.Frequency = 1;
    f.EnvironmentList = {Hill, Forest, Mountain, Air};

    f.Boss = MonsterFactory::createAarakocra();
    f.Seargent = MonsterFactory::createAarakocra();
    f.Mook = MonsterFactory::createAarakocra();

    // TODO: These need better definitions
    Monster placeholder;
    f.Pet = placeholder;
    f.Guardian = placeholder;

    f.Tank = MonsterFactory::createAarakocra();
    f.Rogue = MonsterFactory::createAarakocra();
    f.Healer = MonsterFactory::createAarakocra();
    f.Dps = MonsterFactory::createAarakocra();
    f.Caster = MonsterFactory::createAarakocra();
    f.Mount = MonsterFactory::createAarakocra();

    return f;
}

