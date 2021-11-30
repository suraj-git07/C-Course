//program to return the subarray whose sum is same as input
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

    // enterting S
    int S;
    cout<<"Please enter S: ";
    cin>>S;

    //here we go...
      
    int i=0 , j=0 , st =-1 , ed=-1, sum = 0;
    
    while (j<n && sum+ar[j]<= S)
    {
        sum+=ar[j];
        j++;
    }
    
    if (sum== S)
    {
        cout<< i<<" "<<j<<endl;
        return 0;
    }
    
    while(j<n)
    {
        sum += ar[j];
        while (sum>S)
        {
           sum-= ar[i];
           i++;
        }

        if (sum==S)
        {
            st = i;
            ed = j;
            break;
        }
        
        j++;
        
    }
    
    cout<<"from index "<<st<<" to "<< ed<<endl;
    
    
    
    return 0;

} 