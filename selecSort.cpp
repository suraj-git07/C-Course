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

    
// selection sort algo  O(n*2)

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (ar[j]<ar[i])
            {
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
            
        }
        
    }
    
    
// cout after sorting
    
    cout<<endl<<"sorted array :"<<endl;
    for(int j=0 ; j<size;j++)
    {
        cout<<ar[j]<<" ";
    }

    
    
    
    return 0;
}
