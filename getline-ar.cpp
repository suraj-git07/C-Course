#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char ar[n+1];
    cin.getline(ar,n);
    cin.ignore();
    
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i];
    }
    
    return 0;
}
