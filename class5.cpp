// friend func

/*  Properties of friend function------

1. not in the scope of class
2. since not in scope of class , it cannot called from obj , ex c1.sumnum() == invalid 
3. can be invoed without the help of obj
4. usually contains obj as argument
5. can be declered in public/private section of class
6. cannot access the memeber dirrectly by their name and need obj.memner_name to access

*/


#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setnum(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    
    friend Complex sumnum(Complex o1, Complex o2);       //decleration of friend func

    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

Complex sumnum(Complex o1, Complex o2)     //let's make sunnum a friend func of class complex 
{    
    Complex o3;
    o3.setnum((o1.a + o2.a) , (o1.b +o2.b));     //here summun is foreign func but using a , b of class which is a private func
    return o3;

}

int main()
{
    Complex x , y , z;
    x.setnum(3, 4);
    y.setnum(4, 6);
    
    x.printnum();
    y.printnum();

    z = sumnum(x , y);
    z.printnum();


    return 0;
}
