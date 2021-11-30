// Abstract base class is a  base class that contain atleast one pure Virtual func
/*
That type of class which is just made to make derived classes from it  (not used for making objects)- Abstract base class
that type of virtual func which is just made to redefine( that means , it it necessary to make that func in all derived class) - Pure Virtual func

AN Abstract class must contain a pure virtual func

*/

#include <iostream>
using namespace std;

class Base
{

public:
    int var_base = 0;
    virtual void display() = 0; // this is pure virtual func
};

class Derived : public Base
{
public:
    int var_derived = 0;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{

    Derived der;
    der.var_base = 20;

    Base *base_ptr = &der;
    base_ptr->var_base = 10;

    base_ptr->display();

    return 0;
}
