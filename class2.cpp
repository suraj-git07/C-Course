// nesting of member function
#include <iostream>
#include <string>

using namespace std;

class binary
{

    string s;
    void check_bin(void);

public:
    void get_bin(void);
};

void binary ::get_bin(void)
{
    cout << "enter a binary num : " << endl;
    cin >> s;
    check_bin(); // nesting of member func
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Entered num is not a binary num :";
            exit(0);
        }
    }
    cout << "yes it is a binary num";
}

int main()
{
    binary b;
    b.get_bin();

    return 0;
}