#include "tableentry.h"

template <class Thing>
Thing TableEntry<Thing>::result() const
{
    return _result;
}

template <class Thing>
int TableEntry<Thing>::weight() const
{
    return _weight;
}

template <class Thing>
TableEntry<Thing>::TableEntry()
{

}

template <class Thing>
TableEntry<Thing>::TableEntry(Thing result, int weight)
{
    _result = result;
    _weight = weight;

}

