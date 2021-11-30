// Virtual Base class

/*
                     A  ( Virtual base class )
            _________|_________
            |                 |
            B_________________C
                    |
                    D

1. Let there is a variable 'a' in A base class
2. Ater creating B and C there is 'a' in each of them
3. Now when we make D we get two 'a' from both B & C ( That's the ambiguity )

To Solve this ambiguity we make A ' Virtual_Base_Class ' while creating B & C



jab hum ek derived class banate hai using a virtual base class , to uska matlab hota hai ki...
jab bhi derived class se koi further derived class banegii ,
 ' to apne ( jo use base se mile hai ) data  member ko inherit karwane se pehle dekh lena ki kahi uski copy pehle se to nahi hai '

*/

#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_no;

public:
    void set_no(int a)
    {
        roll_no = a;
    }
    void print_num(void)
    {
        cout << " Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{

protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your marks is here :" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "Your PT score is here :" << endl
             << "Score: " << score << endl;
    }
};

class Result : public Test, public Sports
{

private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_num();
        print_marks();
        print_score();
        cout << "Your Total score is: " << total << endl;
    }
};


int main()
{
    Result suraj;
    suraj.set_no(07);
    suraj.set_marks(98,100);
    suraj.set_score(90);
    suraj.display();
    return 0;
}
