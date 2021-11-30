// Constructor in derived class + flow of constr execution
/*

Case 1 :
class B : public A {
   // Order of execution of constructor -> first A() then B()
};

Case 2 :
class B : public A , public C {
   // Order of execution of constructor -> first A() then C() then B()
};

Case 3 :
class B : public A , virtual public C {
   // Order of execution of constructor -> first C() then A() then B()
};

virtual base is preferred over non virtual base class

*/

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdata1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdata2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int der1;
    public:
    Derived(int a, int b, int c) : Base1(a), Base2(b)    //special syntax
    {
        der1 = c;
        cout << "Derived class constructor called" << endl;
    }

    void printdataD()
    {
        cout << "The value of der1 is " << der1 << endl;
    }
};

int main()
{ 
    Derived suraj(10,12,15);


    return 0;
}