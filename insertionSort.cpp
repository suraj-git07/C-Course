#include<iostream>
using namespace std;

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
    
 // cout before sorting
    

    cout<<"The entered array :"<<endl;
    for(int j=0 ; j<size;j++)
    {
        cout<<ar[j]<<" ";
    }

    
// insertion sort algo  O(n*2)
   
   for (int i = 1; i < size ; i++)
   {
       int current = ar[i];
       int j = i-1;
       while (ar[j]>current && j>=0)
       {
           ar[j+1] = ar[j];
           j--;
       }
       
       ar[j+1] = current;
   }
   

    
    
    
// cout after sorting
    
    cout<<endl<<"sorted array :"<<endl;
    for(int j=0 ; j<size;j++)
    {
        cout<<ar[j]<<" ";
    }

    
    
    
    return 0;
}
