#include <iostream>
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
    

    int ans =2 ;
    int pd = ar[1]-ar[0];
    int curr = 2;

    for (int i = 2; i < n; i++)
    {
        int n_pd;
        n_pd = ar[i]-ar[i-1];

        if (n_pd==pd)
        {
            curr++;
        }
        
        else
        {   pd = n_pd ;
            curr =2;

        }
        
        ans = max(ans,curr);
    
    }

    cout<<" The length of max Arithmatic subarray: "<<ans;
    return 0;

    }
    