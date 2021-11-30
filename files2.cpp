#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    //    ofstream out;
    //    out.open("sample.txt");
    //    out<<"This is me";
    //    out.close();

    ifstream in;
    in.open("sample.txt");

    while (in.eof()==false)   //in.eof means in obj ka end_of_file
    {
        string data;
        getline(in, data);
        cout << data<<endl;
    }

    in.close();

    return 0;
}