#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //pattern 1

   for(int i = 5; i>0; i--)
    {
        for (int j = 1 ; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    cout<<endl;
    //pattern 2

   for(int i = 1; i<6; i++)
    {
        for (int j = 1 ; j <=i ; j++)
        {
            
            if ((i+j)%2==0)
            {
                 cout<<1<<" ";
            }
            
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
    
    
    cout<<endl;
    //pattern 3

    for (int i = 1; i < 6; i++)
    {
        int j ;
        for ( j = 1; j <= 5-i; j++)
        {
           cout<<" "; 
        }
        
        for ( j=6-j ; j >=1; j--)
        {
           cout<<j<<" ";
        }
        
        for ( j=1 ; j < i; j++)
        {
            cout<<j+1<<" ";
        }
        
        cout<<endl;

    }
    
    cout<<endl;
    //pattern 4
  
    int n;
    cout<<"Enter n :";
    cin>>n;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if ((i+j)%4==0 )
            {
                cout<<"*";
            }
            
            else if (i==2 && (i+j -2)%4==0)
            {
                cout<<"*";
            }
            

            else
                cout<<" ";

        }
        
        cout<<endl;
    }
    
  
    return 0;
}
