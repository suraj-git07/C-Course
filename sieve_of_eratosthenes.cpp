//used to print all prime num between a given range

// in sieve of eratosthenes we do something like firstly we iterate from 2 to n and doing this we mark all the multiples of that num
// and lastly after doing all this the non marked ele are the prime ones


#include<iostream>
using namespace std;


void primesieve(int n)
{
    int prime[n+1] = {0};

    for (int i = 2 ; i <= n; i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)    //starting marking from i*i since before that all multiples are already marked
            {
                prime[j] = 1 ;
            }
            
        }
        
    }
    
    for (int i = 2; i <=n; i++)
    {
        if (prime[i]==0)
        {
            cout<<i<<" ";
        }
        
    } cout<<endl;

}


int main(int argc, char const *argv[])
{
    
    int n;
    cin>>n;

    primesieve(n);


    return 0;
}
