#include<iostream>
using namespace std;

int fac(int n)
{
   int factorial = 1;
   for (int i = 2; i <= n ; i++)
   {
       factorial*=i;
       cout<<factorial<<endl;   
   }
   
   return factorial; 
}

int main(int argc, char const *argv[])
{
    int n,r;
    cout<<"Enter the value of n and r :" ;
    cin>>n>>r;
    // cout<<fac(n)<<endl;
    // cout<<fac(n-r)<<endl;
    // cout<<fac(r)<<endl;
    cout<<fac(n)/(fac(n-r)*fac(r));
    return 0;
}
