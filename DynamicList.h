#ifndef DYNAMICLIST_H
#define DYNAMICLIST_H

#include "SeqList.h"

namespace DFLib
{
template <typename T>
class DynamicList : public SeqList<T>
{
public:
    DynamicList(int capacity);
    int capacity() const;

    void resize(int capacity);
    ~DynamicList();

protected:
    int m_capacity;
};
}


#endif // DYNAMICLIST_H
