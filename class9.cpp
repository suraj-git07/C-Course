// copy constructor is used to make a obj that resemple a pre defined obj

#include <iostream>
using namespace std;

class Value
{

    int data;

    public :

    Value()
    {
        data = 0;
    }
    
    Value(int a)
    {
        data = a;
    }

    Value( Value &obj)    //this is copy constructor
    {
        cout<<"Copy constr called"<<endl;
        data = obj.data;
    }

    // if there is no copy constr compailer will assign its own copy constr

    void print_data()
    {
        cout << "the value of data is " << data << endl;
    }
};

int main()
{
    Value x , y , z(45) ;

    x.print_data();
    y.print_data();
    z.print_data();
    
    Value w = z;   // another way Value w(z)
    w.print_data();

    return 0;
}