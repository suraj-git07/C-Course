// constructor
/*

1. Constructor is a special member func with the same name as of the class
2. it is used to initialize the obj of its class
3. it is automatically invoked whenever an obj is created (means anything written in constr executed)
4. no return type
5. Should be declered in public section
6. We cannot refer to their address

*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    Complex(int a1, int b1); // decleration of  'parametrized constr'     // if (void) then it is a 'default constr'

    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int a1, int b1)
{
    a = a1;
    b = b1;
}

int main()
{
    // implicit call
    Complex x(1, 2);

    //explicit call
    Complex y = Complex(4,5);

    x.printnum();
    y.printnum();

    return 0;
}