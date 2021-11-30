// new and delete operator

// new operator is used for dynamically allocate memory
//  Similarly delete to deallocate it

/*
Static memory allocation : here in compile time it is decided how much memory/lifetime to allocate on the run time 
Dynamic memory allocation: give flexibility , memory is allocated in run time ,
                           so there lifetime is also nor fixed so he have to clear the memory used by the variable after its use

*/

#include <iostream>
using namespace std;
int main()
{

    int *ptr = new int(10);
    int *ptr1 = new int[3];

    ptr1[0] = 10;

    ptr1[1] = 11;

    ptr1[2] = 12;

    cout << *(ptr1 + 1);

    // delete

    delete ptr;
    delete[] ptr1;

    return 0;
}