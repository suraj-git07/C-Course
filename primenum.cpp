#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"please enter the numbers:" ;
    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        int j ;
        bool flag =0;
        for(j =2 ; j<=sqrt(i) ; j++)
        {
            if(i%j==0){
               
               flag =1 ;
               break;
            }

        }
        
        if(flag==0){
            cout<<i<<" is a prime number"<<endl;
        }
    
    }
    return 0;
}
