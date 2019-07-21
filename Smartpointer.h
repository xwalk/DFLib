#ifndef _SMARTPOINTER_H
#define _SMARTPOINTER_H

namespace DFLib
{
template <typename T>
class SmartPointer
{
public:
    SmartPointer()
    {
        m_pointer = 0;
    }
    SmartPointer(T* pointer)
    {
        m_pointer = pointer;
    }
    ~SmartPointer()
    {
        delete m_pointer;
    }

    SmartPointer(const SmartPointer<T>& pointer)
    {
        m_pointer = pointer.m_pointer;
        const_cast<T*>(pointer.m_pointer) = 0;
    }

    SmartPointer<T>& operator =(const SmartPointer<T>& pointer)
    {
        if(this != &pointer)
        {
            m_pointer = pointer.m_pointer;
            const_cast<T*>(pointer.m_pointer) = 0;
        }
        return *this;
    }

    T* operator ->()
    {
        return m_pointer;
    }
    T& operator *()
    {
        return *m_pointer;
    }

    bool IsNull()
    {
        return m_pointer != 0;
    }

private:
    T* m_pointer;
};
}

#endif // SMARTPOINTER

