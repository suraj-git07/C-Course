// class template with multiple parameter  + Default Parameter

#include <iostream>
using namespace std;

template <class T1, class T2 , class T3 = int >
class myClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

    myClass(T1 a, T2 b , T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void display()
    {
        cout << this->data1 << " " << this->data2<<" "<<this->data3;
    }
};

int main()
{
    // myClass<int, char> obj(1, 's',4);    // Yaha T3 nahi bataya to apne aap int le loya
    myClass<int, char, float> obj(1, 's',4.5);

    obj.display();

    return 0;
}