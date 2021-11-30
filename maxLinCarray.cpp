#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the world length: ";
    cin>>n;
    cin.ignore();
    char ar[n+1];  //size is size+1 because of the length character
    cout<<"Enter the line: ";
    cin.getline(ar ,n);
    cin.ignore();  // to clear the buffer 
    
   
    int i = 0;
    int currLen = 0;
    int maxLen = 0 ;
    int st = 0 , maxst= 0;
    
    while(1)
    {
        
        
        if (ar[i]==' ' || ar[i]=='\0')
        {
            // cout<<'*'<<endl;
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        
        else
            // cout<<'#'<<endl;
            currLen++;

        
        if (ar[i]=='\0')
        {
            // cout<<'$'<<endl;
            break;
        }
        

        i++;
    }
    
    for (int j = 0; j < maxst; j++)
    {
        cout<<ar[i+maxst]<<endl;
    }
    
    cout<< maxLen<<endl;
    
    return 0;
}
