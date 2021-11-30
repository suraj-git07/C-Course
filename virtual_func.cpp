// Virtual func
// It is used to overwrite the default behaviour

#include <iostream>
using namespace std;

class Base
{

public:
    int var_base=0;
    virtual void display() // If i made this display virtual means.... , even if a base class ptr points towards derived class obj , still run the func of derived 
                           // (opp to default behaviour)    // If there is no display in derived then call the base one
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived=0;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{

    Derived der;
    Base *base_ptr= &der;

    // base_ptr = &der;

    base_ptr->var_base = 10;
    base_ptr->display();

    return 0;
}

 
 /*   Virtual func Rules

1.  They cannot be static
2.  They are accessed by obj pointers
3.  Virtual func can be a friend of another class
4.  A virtual fun in a base class might not be used
5.  If a virtual func is defined in a base class, there is no necessity of redifing it in derived class
 
 */
