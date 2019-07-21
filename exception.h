#ifndef _EXCEPTION_H
#define _EXCEPTION_H

namespace DFLib
{
class Exception
{
public:
    Exception(const char* message);
    Exception(const char* file,int line);
    Exception(const char* message,const char* file,int line);
    Exception(const Exception& e);
    Exception& operator =(const Exception& e);

    virtual const char* message() const;
    virtual const char* location() const;

    virtual ~Exception();

private:
    void Init(const char* message,const char* file,int line);

protected:
    char* m_message;
    char* m_location;
};

class ArithmeticException : public Exception
{
public:
    ArithmeticException():Exception(nullptr){}
    ArithmeticException(const char* message):Exception(message){}
    ArithmeticException(const char* file,int line):Exception(file,line){}
    ArithmeticException(const char* message,const char* file,int line):Exception(message,file,line){}
    ArithmeticException(const ArithmeticException& e):Exception(e){}
    ArithmeticException& operator =(const ArithmeticException& e)
    {
        Exception::operator =(e);
        return *this;
    }

};

class NullPointerException : public Exception
{
public:
    NullPointerException():Exception(nullptr){}
    NullPointerException(const char* message):Exception(message){}
    NullPointerException(const char* file,int line):Exception(file,line){}
    NullPointerException(const char* message,const char* file,int line):Exception(message,file,line){}
    NullPointerException(const NullPointerException& e):Exception(e){}
    NullPointerException& operator =(const NullPointerException& e)
    {
        Exception::operator =(e);
        return *this;
    }

};

class IndexOutOfBoundsException : public Exception
{
public:
    IndexOutOfBoundsException():Exception(nullptr){}
    IndexOutOfBoundsException(const char* message):Exception(message){}
    IndexOutOfBoundsException(const char* file,int line):Exception(file,line){}
    IndexOutOfBoundsException(const char* message,const char* file,int line):Exception(message,file,line){}
    IndexOutOfBoundsException(const IndexOutOfBoundsException& e):Exception(e){}
    IndexOutOfBoundsException& operator =(const IndexOutOfBoundsException& e)
    {
        Exception::operator =(e);
        return *this;
    }

};

class NoEnoughMemoryException : public Exception
{
public:
    NoEnoughMemoryException():Exception(nullptr){}
    NoEnoughMemoryException(const char* message):Exception(message){}
    NoEnoughMemoryException(const char* file,int line):Exception(file,line){}
    NoEnoughMemoryException(const char* message,const char* file,int line):Exception(message,file,line){}
    NoEnoughMemoryException(const NoEnoughMemoryException& e):Exception(e){}
    NoEnoughMemoryException& operator =(const NoEnoughMemoryException& e)
    {
        Exception::operator =(e);
        return *this;
    }

};

class InvaildParameterException : public Exception
{
public:
    InvaildParameterException():Exception(nullptr){}
    InvaildParameterException(const char* message):Exception(message){}
    InvaildParameterException(const char* file,int line):Exception(file,line){}
    InvaildParameterException(const char* message,const char* file,int line):Exception(message,file,line){}
    InvaildParameterException(const InvaildParameterException& e):Exception(e){}
    InvaildParameterException& operator =(const InvaildParameterException& e)
    {
        Exception::operator =(e);
        return *this;
    }

};

}

#define THROW_EXCEPTION(e,message) throw(e(message,__FILE__,__LINE__))



#endif // EXCEPTION

