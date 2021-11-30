#include <iostream>
#include<climits>
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
    
//cout the array

//     cout<<"The entered array :"<<endl;
//     for(int j=0 ; j<size;j++)
//     {
//         cout<<ar[j]<<" ";
//     }

// max min of the array

    int max_n = INT_MIN;
    int min_n = INT_MAX;

    for(int k =0 ; k<size ; k++)
    {

       max_n = max(ar[k],max_n);
       min_n = min(ar[k],min_n);
    }

    cout<<"Maximum number in the aaray "<<max_n<<endl;
    cout<<"Minimum number in the aaray "<<min_n;

    return 0;
}
