#include<iostream>
#include<string>
#include<fstream>

/*
The usefull classesfor working with files in C++ are:
1.  fstreambase
2.  ofstream --> derived from fstreambase
3.  ifstream--> derived from fstreambase

In order to work with files , you will have to open it. Primarily there are 2 ways to open a file
1. using constructor
2. using the member func open() of the class

*/


using namespace std;

int main(){
   
   // Open file using constructor

   //for writing

   ofstream out("sample.txt");     //openinf file using object out's constructor
   
   string data = "Hello My Name Is Suraj";

   out<<data;
   out.close();   //good approach

   // For Reading

   ifstream in("sample.txt");

   string data1;         // we will read the file and trasfer its data into data1

//    in>>data1;    //here it will stop reading where it encounters an space or linebreak

   getline(in , data1);   //take only one line    //getline func in string file
   cout<<data1<<endl;
   getline(in , data1);   //take only next line
   cout<<data1<<endl;
   in.close();


   return 0;
}