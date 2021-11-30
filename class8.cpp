//constructor overloding
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    
    // creating constr  1   //  default one
    Complex(); 

    // creating constr  2
    Complex(int a1); 

    // Creating  constr 3
    Complex(int a1, int b1); 

    // //Creating constr 4 with default argument
    // Complex(int a1 , int b1 = 4);


    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex()
{
    a = 0;
    b = 0;
}

Complex ::Complex(int a1)
{
    a = a1;
    b = 0;
}

Complex ::Complex(int a1, int b1)
{
    a = a1;
    b = b1;
}

Complex ::Complex(int a1, int b1=4)
{
    a = a1;
    b = b1;
}

int main(int argc, char const *argv[])
{
    Complex x(4,5) , y(5) , z ;

    x.printnum();
    y.printnum();
    z.printnum();
   

    return 0;
    
}
