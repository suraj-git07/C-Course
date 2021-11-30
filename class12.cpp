#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary = 34;
    
    Employee(){} //default constr
    
    Employee(int i)
    {
        id = i;
    }
};

// Derived Class

/*
class{{Derived class name}} : {{visibility-mode} {{Base class name}}
{
    class member/function
}
*/

/*
1. Default visibilty mode is Private
2. Priavate visibility mode: Public memebers of Base class becomes Private of Derived Class
3. Public visibility mode: Public memebers of Base class becomes public of Derived Class

4. Private members of the base class are never inherit

*/

class Programmer : public Employee // when Programmer obj formed it will automatically Employee's Default costr
{
public:
    int lang_code = 0;

    Programmer(int x , int y , int z){
        id =x;
        salary = y;
        lang_code = z;
    }
};

int main()
{
    Programmer suraj(1,200,4);
    cout << suraj.salary<<" "<<suraj.id<<" "<<suraj.lang_code<<" ";
    return 0;
}