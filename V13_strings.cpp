#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    // string str ="suraj";
    // // cout<<str<<endl;
    // string str1(5,'n');   //specific char n times in a string
    // // cout<<str1<<endl;
    // string str2;
    // getline(cin , str2);
    // // cout<<str2;

//    .............................................................................
   
//    string s1 ="fam";
//    string s2 = "ily";

// s1.append(s2);//one way
//    s1 = s1 +s2 ;  other way
//    cout<<s1;

// .....................................................................................
//    s1.clear()  //clear the str
// ........................................................................................

//    cout<<s1.compare(s2);           // postive means s2 < s1 and neg that s2 > s1 and 0 means s1=s2
   
//  .....................................................................................

    //.empty()
    // s1.clear();
    // if (s1.empty())
    // {
    //     cout<<"string is empty";
    // }
    
//.......................................................................................

    //.earase()

    // string s3 ="samrat mishra";

    // s3.erase(2,5);   // 1- from what index   2- how many elements
    // cout<<s3;
//........................................................................................

    //.find()

    // cout<<s1.find('a')<<endl;   //return index of char
    // cout<<s1.find("am");    //return the starting index , of first encounter 
//........................................................................................

    //.insert()

    // string s4 ="lol";
    // s1.insert(2 ,s4);  //1- strating index  2- what
    // cout<<s1;

//.........................................................................................

    //.size    //.length

//.......................................................................................

   //.substr(starting index , how many)

   // string s = s1.substr(1,2);
   // cout<<s;

//......................................................................................

//    string s5 = "786";
//    int x = stoi(s5);
//    cout<<x+2;

//.....................................................................................

      //to_string(int_value)   output is a string
//.....................................................................................
                              
                                 //sorting a string
      
    // use sort func form algorithm header file
    
    // sort(starting_interator , ending_inetrator)   

    // sort(s1.begin() , s1.end());
    // cout<<s1;

//.....................................................................................
 
                                  //transform to upper/lower case
    
    string s6 = "raju mastkalandar";
    transform(s6.begin() ,s6.end() , s6.begin() , ::toupper);   // starting interator , ending interator , from where :: to what
    //for lower case use tolower
    cout<<s6;

    return 0;
}
