#include "familyfactory.h"

FamilyFactory::FamilyFactory()
{

}

QList<MonsterFamily> FamilyFactory::createFamilyList()
{
    QList<MonsterFamily> list;

    list.append(createAarakocraFamily());
    list.append(createAbolethFamily());
    list.append(createAngelFamily());

    return list;
}

MonsterFamily FamilyFactory::createAarakocraFamily()
{
    MonsterFamily f;
    Monster aarakocra = MonsterFactory::createAarakocra();

    f.FamilyName = "Aarakocra Preyhunters";
    f.Tier = 1;
    f.Frequency = 1;
    f.EnvironmentList = {Hill, Forest, Mountain, Air};

    f.Default = aarakocra;

    return f;
}

MonsterFamily FamilyFactory::createAbolethFamily()
{
    MonsterFamily f;
    Monster aboleth = MonsterFactory::createAboleth();
    Monster nullMonster;

    f.FamilyName = "Aboleth Outcast";
    f.Tier = aboleth.Tier;
    f.Frequency = 1;
    f.EnvironmentList = aboleth.EnvironmentList;

    f.Default = aboleth;

    return f;
}

MonsterFamily FamilyFactory::createAngelFamily()
{
    MonsterFamily f;
    Monster nullMonster;
    Monster deva = MonsterFactory::createDeva();
    Monster planetar = MonsterFactory::createPlanetar();
    Monster solar = MonsterFactory::createSolar();


    f.FamilyName = "High Divine Court";
    f.Tier = 4;
    f.Frequency = 1;
    f.EnvironmentList = deva.EnvironmentList;
    f.Default = deva;
    f.Boss = solar;
    f.Seargent = planetar;
    f.Mook = deva;
    f.Pet = nullMonster;
    f.Guardian = deva;
    f.Tank = deva;
    f.Rogue = nullMonster;
    f.Healer = deva;
    f.Dps = deva;
    f.Caster = deva;
    f.Mount = nullMonster;

    return f;

}

