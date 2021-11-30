#include<iostream>
#include<algorithm>
using namespace std;

int binaryS(int arr[],int  n , int key)
{
    
    
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
       int mid = (start + end)/2;
       if (arr[mid]==key)
       {
           return mid;
       }

       else if (arr[mid]<key)
       {
           start = mid+1;
       }
       
        else
        {
            end =mid-1;
        }
        

    }

    return -1;
}

int main(int argc, char const *argv[])
{
    //here we enter the aaray

    int size;
    cout<<"Please enter the size of the array : ";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements :"<<endl;
    for(int i=0 ; i<size;i++)
    {
        cin>>ar[i];
    }
    
    // using binary search 
    int element;
    cout<<"please enter the element you want to search ";
    cin>>element;
    cout<<binaryS(ar, size , element);
    
    return 0;
}
