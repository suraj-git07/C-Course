// Initialization section  (just a syntax for constructor)
/*

syntax for initialization list in constr
constructor (argument-list) : initialization section
{
    body
}

*/

#include <iostream>
using namespace std;

class Test
{

    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j*2)
    // Test(int i, int j) : a(i), b(a*2)
    Test(int i, int j) : b(j), a(b*2)   // RED FLAG --> This will give garbage value of 'a' because 'a' have to initialize first since it is declered first
    
    {
        cout << "Constructor executed " << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{

    Test sam(4, 6);

    return 0;
}