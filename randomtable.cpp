#include "randomtable.h"

template <class Thing>
RandomTable<Thing>::RandomTable()
{

}

template <class Thing>
void RandomTable<Thing>::_addEntry(TableEntry<Thing> entry)
{
    _possibleEntries.append(entry);
}

template <class Thing>
void RandomTable<Thing>::addEntry(QString entry, int weight)
{
    TableEntry<Thing> record(entry, weight);
    _possibleEntries.append(record);
}

template <class Thing>
TableEntry<Thing> RandomTable<Thing>::rollTable()
{
    // populate full table
    QList<TableEntry <Thing> > fullTable;
    TableEntry<Thing> entry;
    foreach (entry, _possibleEntries) {
        for (int i = 0; i < entry.weight(); ++i) {
            fullTable.append(entry);
        }
    }

    // select from table
    int min = 0;
    int max = fullTable.size();
    //int index = (qrand() % ((max) - min) + min);
    int index = Dice::randomNumber(min, max-1);

    return fullTable[index];
}

template <class Thing>
Thing RandomTable<Thing>::getRollTableEntry()
{
    return rollTable().result();
}

