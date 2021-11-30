// Ambiguity Resolution


#include <iostream>
using namespace std;

class Base1
{

public:
    void Greet()
    {
    cout<<"how are you "<<endl;
    }
};

class Base2
{

public:
    void Greet()
    {
    cout<<"kese ho "<<endl;
    }
};


class Derived : public Base1 , public Base2 
{
    public:
    void Greet(){                   
        Base2 :: Greet();
    }


};


int main()
{
   Derived suraj;
   suraj.Greet();

    return 0;
}