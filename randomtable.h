#ifndef RANDOMTABLE_H
#define RANDOMTABLE_H

#include <QList>
#include <QtGlobal>

#include "tableentry.h"
#include "dice.h"

template <class Thing>
class RandomTable
{
    TableEntry <Thing> _testEntry;
    QList<TableEntry <Thing> > _possibleEntries;
    uint _seed;


public:
    RandomTable();
    void addEntry(QString entry, int weight = 1);
    TableEntry <Thing> rollTable();
    Thing getRollTableEntry();
private:

    void _addEntry(TableEntry <Thing> entry);
};

#endif // RANDOMTABLE_H
