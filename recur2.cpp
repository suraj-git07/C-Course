#include<iostream>
#include<climits>
using namespace std;

bool sortr(int ar[], int n)
{
    if (n==1)
    {
        return true;
    }
    return (ar[0]<ar[1] && sortr(ar+1, n-1));
}


void inc(int n)
{
    if (n==1)
    {
       cout<<1<<endl;
       return ;
    }
    
    inc(n-1);
    cout<<n<<endl;
}


int firstocr(int arr[] , int n , int i , int key)
{
    if(i==n)
    {
        return -1;
    }
    
    if(arr[i]==key)
    {
        return i;
    }

    return firstocr(arr , n , i+1 , key);


}

int lastocr(int arr[], int n , int i , int key)
{
    if(i==n)
    {
        return -1;
    }
    
    int restarray = lastocr(arr , n ,i+1 , key);
    
    if (restarray!=-1)
    {
        return restarray;
    }
    if (arr[i]==key)
    {
        return i;
    }
    
    return -1;
}


int main(int argc, char const *argv[])
{
    // int ar[5] ={1,2,3,4,5};
    // cout<<sortr(ar , 5);
    // inc(5);
    
    int ar[5]={1,2,3,2,3};
    cout<<firstocr(ar , 5 , 0 , 3)<<endl;
    cout<<lastocr(ar,5,0,3);
    return 0;
}
