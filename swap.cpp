#include<iostream>
using namespace std;

// void swap(int a , int b)   // this swap make a local variable and do updation to that and not chnage the global one. call by value
// {
//     int temp = a;
//     a =b;
//     b =temp;
    
// }


void swap(int &a , int &b)  //call by referance
{
    int temp = a;
    a=b;
    b =temp; 
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;

    cout<<a<<" "<<b<<endl;
    // swap(a,b); // old swap

    swap(a ,b);  // new swap
    cout<<a<<" "<<b;
    return 0;
}
