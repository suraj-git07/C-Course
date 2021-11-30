#include <iostream>
using namespace std;

class Complex
{

    int real, imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data()
    {
        cout << "Your complex num is :" << real << " + " << imaginary << 'i' << endl;
    }
};

int main()
{

    Complex c1;
    // c1.set_data(4,6);
    // c1.get_data();
    
    Complex *p = &c1;
    // (*p).set_data(4,6);
    // (*p).get_data();

    // this is same as

    p->set_data(4,6);            // -> Arrow operator
    p->get_data();


        return 0;
}