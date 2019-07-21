#ifndef ARRAY_H
#define ARRAY_H

#include "Object.h"

namespace DFLib {

template <typename T>
class Array : public Object
{
public:
    virtual bool set(int i,const T& e);
}

#endif // ARRAY_H

