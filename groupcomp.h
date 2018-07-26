#ifndef GROUPCOMP_H
#define GROUPCOMP_H

#include <QString>


class GroupComp
{
    QString _code;
public:
    static const GroupComp NULL_COMP;
    static const GroupComp SOLO_MOOK;
    static const GroupComp SOLO_BOSS;
    static const GroupComp BOSS_W_MOOKS;
    static const GroupComp MOOK_GROUP;

    GroupComp();
    bool operator == (const GroupComp& comp) const;
    bool operator != (const GroupComp& comp) const;
    QString asString();
    bool isNull();

private:
    explicit GroupComp(QString compCode);
};

#endif // GROUPCOMP_H
