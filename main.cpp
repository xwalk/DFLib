#include <iostream>
#include "Smartpointer.h"
#include "Exception.h"
#include "Object.h"
#include "seqlist.h"

using namespace std;
using namespace DFLib;

class Test
{
public:
    Test()
    {
        cout << "Test()" <<endl;
    }
    ~Test()
    {
        cout << "~Test()" <<endl;
    }
    void print()
    {
        cout << "Print()" <<endl;
    }
};

int main()
{
    SmartPointer<Test> a = new Test();
    SmartPointer<Test> b;
    cout << a.IsNull() << " "<< b.IsNull() << endl;
    b = a;
    cout << a.IsNull() << " "<< b.IsNull() << endl;

    try
    {
        THROW_EXCEPTION(Exception,"ERROR!");
        cout << "in" <<endl;
    }
    catch(Exception& e)
    {
        cout << e.message() << " " << e.location() << endl;
    }

    return 0;
}

