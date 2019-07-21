#ifndef STATICLIST_H
#define STATICLIST_H

#include "SeqList.h"

namespace DFLib
{
template <typename T>
class StaticList : public SeqList<T>
{
public:
    StaticList();
};
}

#endif // STATICLIST_H
