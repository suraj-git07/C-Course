// Euclid's algorithm
#include<iostream>

using namespace std;

int gcd(int a , int b)
{
   if (a>b)
   {
       while (b!=0)
       {
           int rem = a%b;
           a = b;
           b = rem ; 

       }
       
       return a;
   }
   
   else
    {  cout<<"'a'<'b' !!!!: ";
       return -1;
    }        
}


int main(int argc, char const *argv[])
{
    int a ,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
