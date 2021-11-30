#include<iostream>
using namespace std;

int power(int n , int p)
{
   if (p==0)
   {
       return 1;
   }
   
   return n*power(n,(p-1));


}


int factorial(int n)
{
   if (n == 1)
   {
       return 1;
   }
   
   return n*factorial(n-1);
}



int fib(int n)
{
    if (n ==1 || n==2)
    {
        return n-1;
    }
    
    return  fib(n-1)+fib(n-2);
}


int main(int argc, char const *argv[])
{
    // cout<<power(2,10);
    // cout<<factorial(8);
    cout<<fib(10);
    
    return 0;
}
