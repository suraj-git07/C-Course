#include<iostream>
#include<climits>

using namespace std;


//kadane function

int kadane(int arr[] , int n)
{
    int curr_sum = 0 ;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>= 0)
        {
            curr_sum+=arr[i];
        }
        
        else
        {   
            max_sum = max(max_sum , curr_sum);
            curr_sum = 0 ;
        }

    }
    
    return max_sum ;

}





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
    
    int no_wrap_sum = INT_MIN;
    int wrap_sum = INT_MIN;
    int total_sum = 0;
    
    //total sum

    for (int i = 0; i < n; i++)
    {
        total_sum+=ar[i];
    }
    
    // no wrap sum  , is basically where we there is no need of wrapping in a circular array , and  max sum can be find easily by using kadane algo
    
    no_wrap_sum = kadane(ar , n);
    cout<<no_wrap_sum<<" ";
    
    // wrap sum , here there is a need of wrapping in circular array , 
    // max sum can be find using ,,, total sum - sum of non contributing

    // here sum of non contri ---- can be find by , firstly changing the sign of ele of arrary and then using kadane to find max , which is actully max neg in orginal
    
    
    //s_ar is array with opp sign
    
    int s_ar[n];
    for (int i = 0; i < n; i++)
    {
        s_ar[i] = -(ar[i]);
    }

    
    wrap_sum = total_sum + kadane(s_ar,n);
    cout<<wrap_sum<<" ";
    
    // now checking which is max 

    cout<<" Max sum of Subarray: "<<max(no_wrap_sum,wrap_sum);
    
    
    
    return 0;
}

