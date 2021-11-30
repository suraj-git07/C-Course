#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Please Enter your Savings ";
    cin>>amount;
    
    if(7000>amount && amount>5000){

        cout<<"Go with Rashmi";
    }
    
    else if (amount>7000)
    {
        cout<<"Go with Riya";
    }
    
    else
    {
        cout<<"GO with yourself";
    }
        
    
    return 0;
}
