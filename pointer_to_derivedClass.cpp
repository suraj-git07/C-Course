// Pointer To Derived Class

// Here we make a pointer of base class and point it to obj of dervied class , but...
// It is still calling the fun of base class and since it is decided while prog is running so this is a run time polymorphism

#include <iostream>
using namespace std;

class Base
{

public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{

    Base *base_ptr;
    Derived der;

    base_ptr = &der;

    base_ptr->var_base = 10;
    base_ptr->display();

    // Derived *der_ptr;
    // Base bas;

    // // der_ptr = &bas;    // you cannot point a pointer of Derived class toward the obj of base class

    Derived *der_ptr;
    Derived der1;
    der_ptr = &der1;
    
    der_ptr->var_derived = 12;
    der_ptr->var_base = 1;
    der_ptr->display();


    return 0;
}