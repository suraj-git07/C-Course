#include <iostream>
using namespace std;

int get_bit(int n,int pos)
{
    return ((n & (1<<pos)) != 0);
}

//set bit means to put 1 at that pos

int set_bit(int n , int pos)
{
    
    return (n | ( 1<<pos));

}

// clear bit means to put 0 at that bit

int clear_bit(int n , int pos)
{
    return ( n & (~(1<<pos))) ;
    
}

// update bit is basically clear bit then set bit


int update_bit(int n , int pos , int value)
{
    int mask = ~(1<<pos);
    n = n & mask; 
    return (n | (value<<pos)) ;

}




int main(int argc, char const *argv[])
{
    
    //cout<<get_bit(5,2);
    //cout<<set_bit(5,1);
    //cout<<clear_bit(5,2);
    //cout<<update_bit(5,1,1);

    
    return 0;
}
