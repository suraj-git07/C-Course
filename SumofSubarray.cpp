//Sum of all Subarray

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
    
    //subarray sum
    cout<<"Output : The sum of all Subarray : "<<endl;
    int max_subarray = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum_subarray = 0;
        for (int j = i; j < n; j++)
        {
            sum_subarray+=ar[j];
            cout<<sum_subarray<<endl;
            max_subarray = max(max_subarray,sum_subarray);
        }
        
    }
    
    
    cout<<" Max subarray: "<<endl;
    cout<<max_subarray;
    return 0;
}
