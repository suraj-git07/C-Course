// Template is also knows as parametrized class

// let assume we make a class for int array , but now we want to create an floaat array obj , So we have to create another class for the same
// Foe this problem we can use template where we genralize the type and can use that same class for any data type

/*
 Why use template
  1. DRY
  2. to make genralize programs
  
3. Syntax for template:--
     
  template <class T>       (T can be int , float , double)   , So this is representing multiple classes at the same time
  class Vector
  {
    T* arr;
    public:
    Vector(T*ar)
    {
      //code
    }
   
  }
  
  // initialization
   
  int main{
   
  Vector <int> myvac(ptr);
  Vector <float> myvac(ptr);
  
  }
  
  
 */