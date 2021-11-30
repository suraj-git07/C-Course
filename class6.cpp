// friend in class1 of class2  + 
// friend class 2 of class 1 ,  any func of class 2 can use private data of class 1

#include <iostream>
using namespace std;

// forward decleration

class Complex;

// creting Calc

class Calc
{

public:
    int add(int a1, int a2)
    {
        return a1 + a2;
    }

    int real_csum(Complex o1, Complex o2); // decleration of real_csum

}

// creating Complex

class Complex
{
    int a;
    int b;

public:
    void setnum(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    // individual declarinf func as friend
    
    // friend int Calc ::real_csum(Complex o1, Complex o2);

    // Aliter: Declaring the entire Calc class as friend
    friend class Calc;

    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

// creating real_sum
int Calc ::real_csum(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

int main()
{

    return 0;
}