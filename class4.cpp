// array of object

#include<iostream>
using namespace std;

class Employee
{
    int id;

public:
    void set_data(int i)
    {
        id = i;
        
    }

    void get_data()
    {
        cout << "The id of the employee is :" << id <<  endl;
    }

};


int main(){

   Employee fb[4];

   fb[0].set_data(1);
   fb[0].get_data();

   return 0;
}