// Function Template

#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAvg(T1 a, T2 b)
{
    float avg = (float)(a + b) / 2; // type casting saying , convert value of (a+b) into float    //'Explicit way' of typecasting  ,   if we do 2-> 2.0  then it is 'implicit way'
    return avg;
}

template <class T>
void swapp(T &a, T &b)    // now we cam swap ant data type  ,, (Problem of temp datatype solve)
{

    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    //    cout<<funcAvg(2,5);

    // int x = 5, y = 4;
    // swapp(x, y);
    // cout << x << y;
    int x = 'c', y = 'j';
    swapp(x, y);
    cout <<(char) x <<" "<<(char) y;

    return 0;
}