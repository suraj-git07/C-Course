// protected members are thode who have same property as Private member but can be inherited

/*    For a Protected member:

                 'MODE'-->        Private         Protected           Public
'TYPE OF MEMEBER'

1. Private                     Not Inherited    Not Inherited      Not Inherited
2. Protected                     Private           Protected          Protected
3. Public                        Private           Protected          Public

*/

#include <iostream>
using namespace std;

class Base
{

protected:
    int a;

private:
    int b;

public:
    int c;
};



class Derived : protected Base
{
    
public:
    int d;
};



int main()
{

    return 0;
}