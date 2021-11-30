#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    int reverse_num = 0;
    
    while(num>0)
    {
        int last_dig = num%10;
        reverse_num = reverse_num*10 + last_dig;
        num = num/10;

    }
    
    cout<< "Reversed number: "<<reverse_num;
    
    return 0;
}
