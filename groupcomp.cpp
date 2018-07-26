#include "groupcomp.h"


const GroupComp GroupComp::NULL_COMP("");
const GroupComp GroupComp::SOLO_MOOK("Solo Mook");
const GroupComp GroupComp::SOLO_BOSS("Solo Boss");
const GroupComp GroupComp::BOSS_W_MOOKS("Boss With Mooks");
const GroupComp GroupComp::MOOK_GROUP("Mook Group");

GroupComp::GroupComp()
{
    _code = "";
}

bool GroupComp::operator ==(const GroupComp &comp) const
{
    return (comp._code == _code);
}

bool GroupComp::operator !=(const GroupComp &comp) const
{
    return !(comp._code == _code);

}

QString GroupComp::asString()
{
    return _code;
}

bool GroupComp::isNull()
{
    return _code == "";
}

GroupComp::GroupComp(QString compCode)
{
    _code = compCode;
}


