// destructor
/*
1. never takes an argument nor it return any value
2. automatically call when obj is del ( memeory of obj cleared)
3. destructor is form using class name with tilt
 */

#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Constructor is called for obj " << count << endl;
    }

    ~num()
    {
        cout << "Destructor is called for obj " << count << endl;
        count--;
    }
};

int main()
{
    cout << "Inside main" << endl;
    cout << "Creating first obj n1 " << endl;
    num n1;

    // Creating 'block'
    /* Scope of all elements in a block is valid within the block
      in a block all obj/memeory_allocation  are del/cleared  after block end
    */

    {
        cout << "entering  the block" << endl;
        cout << "Creating two more obj " << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}
