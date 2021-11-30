#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    //......................................................................................................
                                                     //making pointer
    
    // int a = 10;
    // int *ptr = &a;
    // cout<<"Address of a is :"<<ptr<<endl;
    // cout<<"Value at address a :"<<*ptr;
    
    // .....................................................................................................
    
                                                      //arrray as a pointer

    // int arr[3] = {10,20, 30};
    // cout<<arr; //address  of first element of arr
    // cout<<*arr; // add of first ele
    
    // cout<<arr++ ; // this is illegal , arr is a const pointer and cannot be modified
    
    //but for acessing other elem using arr pointer we can use , arr+n

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<*(arr+i)<<" ";   //here arr is an index pointer so by +1 it moves to next index not to next memeory location
    // }
    
    // ......................................................................................................

                                                   //pointer to pointer 

    // int **qtr = &ptr;

    // cout<<qtr<<" "<<*qtr<<" "<<**qtr;

   //........................................................................................................

                                                 // passing pointer to func

    //see swap.cpp

   
    return 0;
}
