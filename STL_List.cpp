// To Explore Go To cpp.com

#include <iostream>
#include <list>
using namespace std;


void display(list<int> &lis)
{
    list<int>::iterator iter;

    for (iter = lis.begin(); iter != lis.end(); iter++)
    {
        cout << *iter << " ";
    }
}

int main()
{

    list<int> list1;    // List of 0 len
    list<int> list2(4); // Empty list of size 7

    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(5);

    // list1.pop_back();

    // list<int> :: iterator iter = list2.begin();
    // list1.insert(iter ,7, 5);

    // list1.remove(5);    //remove(value)


    // list1.sort();  // for sorting
    
    
    // cout<<list2[0];   //not possible not in order




    // list<int> :: iterator iter = list2.begin();
    // *iter++ = 45;
    // *iter = 40;

    // list1.merge(list2);    //list2 pehle  agar all 0 if not then baad me


    // list1.reverse();    //to reverse




    // Create iterator and make it point to the begin of list
    //    list<int> :: iterator iter = list2.begin();

    //    cout<<*iter++<<" ";
    //    cout<<*iter--<<" ";
    //    cout<<*iter<<" ";

    // Display list

    display(list1);
    return 0;
}