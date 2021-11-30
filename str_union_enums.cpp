#include<iostream>
using namespace std;

//(structure) 
// user defined data type , can store diff data types , looks like class

struct employee
{
    int eId;
    char favChar;
    float salary;
};

//using typedef  //now i come to know it is not necessary to use typedef c++ has inbiuld feature you can use sub names without using typedef

typedef struct employee2
{
    int eID;
}ep2;


// (union)
//union is same as structure but with better memory allocation , here ... last when we constructed employee we alocatted 4+1+4 bytes of memory and use any/all 3 of them
// in union memory is shared
// now in union  you can use any one data at a time so, like in a same way we form 3 constraints (4,1,4) , in union we are foing to use only one so the max memory allocated 
// here 4 so we can you any constraint either char or int/float

typedef union gift
{

    int money;
    char toy;
    float salary;
}gf;

int main(){

//    struct employee harry;
//    harry.eId = 10;
//    harry.salary = 400000.00;
//    harry.favChar = 'h';

//    ep2 suraj;
//    suraj.eID = 7;

//    gf ram;
//    ram.toy = 'I';


//    (enum)

   enum Meal{breakfast,lunch,dinner};
//    cout<<breakfast;

// here in enum , value starting from 0 assigned ,so  breakfast = 0 , lunch = 1, dinner 2 etc.. also your meal now become a data type so you can use like 

   Meal m1;
   m1 = lunch;
   // now value of m1  = 1

   return 0;
}