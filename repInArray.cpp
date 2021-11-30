//program to find out the repeting element with min index in an array

#include <iostream>
#include <climits>
using namespace std;

int main()
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

    //cretaing idx aaray
    //a huge array containg initially -1, then updating with the index of array element at the index of idx where element == index of idx 

    const int N = 1e6 + 2;
    int idx_ar[N];
    for (int i = 0; i < N; i++)
    {
        idx_ar[i]=-1;
    }

    int min_idx = INT_MAX; //storing the ans
    
    //now traversing the ar and doing our work

    for (int i = 0; i < n; i++)
    {
        if (idx_ar[ar[i]]  != -1)
        {
            min_idx = min(min_idx , i);
        }
        
        else
        {
            idx_ar[ar[i]] = i;
        }
    
    }
     
    // now showing the result
    if (min_idx = INT_MAX)
    {
        cout<<-1;
    }
     

    else
    {
        cout<<"The repeating element with min index: "<<min_idx;
    }

    return 0;

}