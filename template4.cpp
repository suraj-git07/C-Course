#include <iostream>
using namespace std;

template <class T>
class Suraj
{
public:
    T data;
    Suraj(T a)
    {
        data = a;
    }

    void display();    //initialization
};

template<class T>           //defining
void Suraj<T>::display(){
    cout<<data;
}


int main()
{
    Suraj<char> s('s');
    s.display();
    return 0;
}