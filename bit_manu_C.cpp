#include<iostream>

using namespace std;

//Q1  program to check weather a num is power  of 2

// theory ,,  any power of 2 in binary have ony i bit set  , for example 8 = 1000 
//  also the concept  of  n-1 where  , if n is 01'1'0 then in n-1 the right most 1 bit flip and other bit after that also flip that means 
//  n-1 in binary will be   01'01'  

//  so we are going to use that , any power of 2 num & with n-1 must be 0
//  for example  8 = 1000  so 7 = 0111 then 8 & 7 = 0000
 
int power_of2(int n)
{
    return (n &&  !(n&(n-1))) ;
}



// Q2 to find the numbers of 1 in a binary rep of a number

int no_of1(int n)
{
    int count = 0;
    while (n)
    {
        n= n & (n-1) ;
        count++;
    }
    return count;

}



// Q3 to find all the subsets of an array


void subsets(int arr[], int n)
{
    for ( int i = 0; i < (1<<n); i++)
    {

        for ( int j = 0; j < n; j++)
        {   
            if ( i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        
        cout<<endl; 
    }
     


}

//Q4 to find unique ele in an array , all other present 2 times

int unique( int arr[], int n)
{
    int xor_sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum^arr[i];
    }
    
    return xor_sum;

}



int main(int argc, char const *argv[])
{
    
    // cout<<power_of2(16)<<endl;
    // cout<<power_of2(14);
    // cout<<no_of1(19);
    
    // int arr[4] = { 1,2,3,4};
    // subsets(arr , 4);
    
    // int ar[5] = {1 ,2 ,3 ,2 ,1};
    // cout<<unique(ar , 5);
   



    
    return 0;
}
