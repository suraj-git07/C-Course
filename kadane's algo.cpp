#include <iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    //array input
    int n;
    cout<<"Please enter n: ";
    cin>>n;
    int ar[n];
    cout<<"enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    

    // kadane's algorithm

    int curr_sum = 0 ;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ar[i]>= 0)
        {
            curr_sum+=ar[i];
        }
        
        else
        {   
            max_sum = max(max_sum , curr_sum);
            curr_sum = 0 ;
        }

    }
    
    cout<<" Max sum of the subarray : "<<max_sum ;
    return 0;
}
