#include "Exception.h"
#include <cstdlib>
#include <cstring>

namespace DFLib
{

Exception::Exception(const char* message)
{
    Init(message,NULL,0);
}

Exception::Exception(const char* file,int line)
{
    Init(NULL,file,line);
}

Exception::Exception(const char* message,const char* file,int line)
{
    Init(message,file,line);
}

Exception::Exception(const Exception& e)
{
    m_message = strdup(e.message());
    m_location = strdup(e.location());
}

Exception& Exception::operator =(const Exception& e)
{
    m_message = strdup(e.message());
    m_location = strdup(e.location());
    return *this;
}

void Exception::Init(const char* message,const char* file,int line)
{
    m_message = strdup(message);
    if(file != NULL)
    {
        char tmpStr[20];
        itoa(line,tmpStr,10);
        m_location = static_cast<char*>(malloc(strlen(file)+2+strlen(tmpStr)));
        strcpy(m_location,file);
        strcat(m_location,":");
        strcat(m_location,tmpStr);
    }
    else
    {
        m_location = NULL;
    }
}

const char* Exception::message() const
{
    return m_message;
}

const char* Exception::location() const
{
    return m_location;
}

Exception::~Exception()
{
    free(m_message);
    free(m_location);
}

}
