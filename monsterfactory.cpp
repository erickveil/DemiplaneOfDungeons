#include "monsterfactory.h"

MonsterFactory::MonsterFactory()
{

}

Monster MonsterFactory::createAarakocra()
{
    QList<Environment> environmentList = {Hill, Forest, Mountain, Air};
    Monster m("Aarakocra", 1, Maleable, environmentList, "MM");
    return m;
}

Monster MonsterFactory::createAboleth()
{
    QList<Environment> environs = {Underdark, Coastal, Swamp, Sea};
    Monster m("Aboleth", 2, Boss, environs, "MM");
    return m;
}

Monster MonsterFactory::createDeva()
{
    QList<Environment> environs = {Astral, Guardian, Divine, Law, Good,
                                   OuterPlanes};
    Monster m("Deva", 2, Family, environs, "MM");
    return m;
}

Monster MonsterFactory::createPlanetar()
{
    QList<Environment> environs = {Astral, Guardian, Divine, Law, Good,
                                   OuterPlanes};
    Monster m("Planetar", 3, Family, environs, "MM");
    return m;
}

Monster MonsterFactory::createSolar()
{
    QList<Environment> environs = {Astral, Guardian, Divine, Law, Good,
                                   OuterPlanes};
    Monster m("Solar", 4, Family, environs, "MM");
    return m;
}

