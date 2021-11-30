// this pointer is a pointer which points towars the object whose member func is running

//this pointer can be used where you have to return pointer that points towards current obj


#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A  set_data(int a){
        // a = a;   // this will give garbage value
        
        // (*this).a = a;
        // or
        this->a = a;
        return *this;
    }
    void print_data(){
        cout<<"The value of a is: "<<a<<endl;
    }
};

int main(){
   
   A x;
   x.set_data(4).print_data();
  
   return 0;
}