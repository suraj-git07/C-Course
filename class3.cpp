// static data member
// these are such type of variables that are common for all objects
// share by all oblects
//  also known as class variable
//  by default 0
// decleraed out of class

//static func
// only access static variables/func
// can oberate with object / using class

#include <iostream>
using namespace std;

class Employee
{

    int id;

    static int count; // decleration of static varia

public:
    void set_data(int i)
    {
        id = i;
        count++;
    }

    void get_data()
    {
        cout << "The id of the employee is :" << id << " and this is employee no " << count << endl;
    }

    static void get_count(){
        cout<<"the value of count is: "<<count<<endl;
    }
};

int Employee ::count; // to start with any value can use '= n' after name

int main()
{

    // let i crete 3 obj

    Employee harry, suraj, ram;

    harry.set_data(20);
    harry.get_data();
    Employee :: get_count();

    suraj.set_data(7);
    suraj.get_data();
    Employee :: get_count();

    ram.set_data(40);
    ram.get_data();
    Employee :: get_count();

    return 0;
}