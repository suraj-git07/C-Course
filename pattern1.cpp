#include<iostream>
using namespace std;

int main()
{
   
   // pattern 1
   
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     
    cout<<endl;
    //pattern 2

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <4 ; j++)
        {
            if (i== 0 || i == 4 || j == 0 || j ==3)
            {
                cout<<"*";
            }
    
            else
            {
                cout<<" ";
            }
        }   
        cout<<endl;
    }
    
    cout<<endl;
    // pattern 3

    for (int i = 5; i >0 ; i--)
    {
        for (int j = i; j >0 ; j--)
        {
            cout<<"*";
        }   
        cout<<endl;
    }

    cout<<endl;
   //pattern 4

    for (int i = 0; i < 5; i++)
    {
        int j;
        for ( j = 0; j < 5-(i+1); j++)
        {
            cout<<" ";
        }
        for (int k = j; k < 5; k++)
        {
            cout<<"*";
        }
    
        cout<<endl;
    
    }
    
    cout<<endl ;
   //pattern 5

    int count=1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    cout<<endl;
    //pattern 6
    
    for (int i = 1; i < 5; i++)
    {
        
        for ( int j = 0; j < i; j++)
        {
            cout<<"*";
        }

        for (int k = 0; k < 8-(2*i); k++)
        {
            cout<<" ";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<"*";
        }
        
        cout<<endl;

        
    }
    for (int i = 4; i >0 ; i--)
    {
        
        for ( int j = 0; j < i; j++)
        {
            cout<<"*";
        }

        for (int k = 0; k < 8-(2*i); k++)
        {
            cout<<" ";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<"*";
        }
        
        cout<<endl;

        
    }


    return 0;
}

