#include <iostream>
using namespace std;


template <class T>  // jaha jaha T waha specif data type  use karunga jo baad me bata dunga
class Vector
{

public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dot_product(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            cout<<this->arr<<" "<<v.arr[i]<<endl;
            
            d += this->arr[i] * v.arr[i];
            // cout<<d<<endl;
        }

        return d;
    }
};

int main()
{
    Vector<int> v1(3);
    v1.arr[0] = 10;
    v1.arr[1] = 20;
    v1.arr[2] = 30;

    Vector<int> v2(3);
    v1.arr[0] = 20;
    v1.arr[1] = 10;
    v1.arr[2] = 30;

    int a = v1.dot_product(v2);
    cout << a;

    return 0;
}