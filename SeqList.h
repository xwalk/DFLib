#ifndef SEQLIST_H
#define SEQLIST_H

#include "List.h"

namespace DFLib
{
template <typename T>
class SeqList : public List<T>
{
protected:
    T* m_array;
    int m_length;
public:
    bool insert(int i,const T& e);
    bool remove(int i);
    bool set(int i,const T& e);
    bool get(int i,T& e) const;
    int length() const;
    void clear();

    T& operator[] (int i);
    T operator [](int i) const;

    virtual int capacity() const = 0;
};
}

#endif // SEQLIST_H

