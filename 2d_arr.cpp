//data type arr[rows][column]   - initiallization

//              column------->
// rows    0   1   2    3
//      0 (a)  (e)  (f)   (g)
//   ^  1 (b)  (h)  (i)   (j)
//   |  2 (c)  (k)  (l)   (m)
//   |  3 (d)  (n)  (o)   (p)
//   |



#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n , m;
    cout<<"Enter row and cloumn: " ;
    cin>>n>>m;

    int ar[n][m];

    //cin 2d array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m ; j++)
        {
            cin>>ar[i][j];
        }
        
    }
    
    //cout 2d arrray
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m ; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
