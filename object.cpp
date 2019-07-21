#include "Object.h"
#include <cstdlib>

void* DFLib::Object::operator new(unsigned int size) throw()
{
    return malloc(size);
}

void  DFLib::Object::operator delete(void* p)
{
    free(p);
}

void* DFLib::Object::operator new[](unsigned int size) throw()
{
    return malloc(size);
}

void  DFLib::Object::operator delete[](void* p)
{
    free(p);
}

DFLib::Object::~Object()
{

}

