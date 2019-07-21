#include "SeqList.h"
#include "Exception.h"

namespace DFLib
{

bool SeqList::insert(int i,const T& e)
{
    bool ret = (0 <= i) && (i <= m_length);

    ret = ret && (m_length + 1 <= capacity());
    if(ret)
    {
        for(int j = m_length-1;j >= i;j--)
        {
            m_array[j+1] = m_array[j];
        }
        m_array[i] = e;
    }

    return ret;
}

bool SeqList::remove(int i)
{
    bool ret = (0 <= i) && (i < m_length);

    if(ret)
    {
        for(int j = i;j < m_length - 1;j++)
        {
            m_array[j] = m_array[j+1];
        }
    }

    return ret;
}

bool SeqList::set(int i,const T& e)
{
    bool ret = (0 <= i) && (i < m_length);

    if(ret)
    {
        m_array[i] = e;
    }

    return ret;
}

bool SeqList::get(int i,T& e) const
{
    bool ret = (0 <= i) && (i < m_length);

    if(ret)
    {
        e = m_array[i];
    }

    return ret;
}

int SeqList::length() const
{
    return m_length;
}

void SeqList::clear()
{
    m_length = 0;
}

T& SeqList::operator[] (int i)
{
    if( (0 <= i) && (i < m_length) )
    {
        return m_array[i];
    }
    else
    {
        THROW_EXCEPTION(IndexOutOfBoundsException,"parameter i is out of range ");
    }
}

T SeqList::operator [](int i) const
{
    return const_cast<SeqList<T>&>((*this)[i]);
}

}
