#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <QString>


template <class Thing>
class TableEntry
{
    Thing _result;
    int _weight;

public:
    TableEntry();
    TableEntry(Thing result, int weight);
    Thing result() const;
    int weight() const;
};

#endif // TABLEENTRY_H
