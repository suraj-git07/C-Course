// structue is not save
// cannot add func to struct
// sirf data use karna hai aur security issue nahi hai to struct use kar lo
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); // decleration

    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void Employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main(int argc, char const *argv[])
{
    Employee harry;
    harry.setdata(1, 2, 3);
    harry.d = 4;
    harry.e = 5;
    harry.getdata();
    return 0;
}
