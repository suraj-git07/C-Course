//  To Explore Go to cpp.com
// Associative container

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    map<string, int> marksMap; // here string data is mapped with int data

    marksMap["Harry"] = 80;
    marksMap["Suraj"] = 100;

    marksMap.insert({{"Raju", 50}, {"Ramesh", 20}});

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl; // here iter is pointing to first data set so by (*iter).first  , i can access the first value of that data set
    }

    return 0;
}