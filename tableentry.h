#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <QString>


template <class Thing>
class TableEntry
{
    Thing _result;
    int _weight;

public:
    TableEntry()
    {

    }

    TableEntry(Thing result, int weight)
    {
        _result = result;
        _weight = weight;
    }

    Thing result() const
    {
        return _result;
    }

    int weight() const
    {
        return _weight;
    }
};


#endif // TABLEENTRY_H
