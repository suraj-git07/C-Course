#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    cout<<"Enter the value of n1 , n2 ,n3: ";
    cin>>n1>>n2>>n3;
    
    
    
    int ar1[n1][n2];            // n1 x n2
    
    cout<<"Enter 1 matrix: ";   
    //cin array
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n2 ; j++)
        {
            cin>>ar1[i][j];
        }
        
    }
    
    int ar2[n2][n3];            // n2 x n3

    cout<<"Enter 2 matrix: ";    
    //cin array
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j< n3 ; j++)
        {
            cin>>ar2[i][j];
        }
        
    }
    
    int ans[n1][n3];              // n1 x n3
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n3 ; j++)
        {
            ans[i][j]= 0;
        }
        
    }
    
    
    // multiplication starts here
    

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3;j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += ar1[i][k]*ar2[k][j];
                
            }
            
        }
        
    }
    
    
    // cout the ans matrix

     
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n3 ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}
