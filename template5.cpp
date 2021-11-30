// Template func overloading

#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am First func " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "i am Templatized func " << a << endl;
}

int main()
{

    // func('c');   //obvious that templitized one call
    
    func(1);    // now what happen

// here first one called because Exact match has heigher pripority

    return 0;
}