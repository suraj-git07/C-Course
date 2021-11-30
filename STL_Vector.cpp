// Vectors are resizeable array

// go to cplusplus.com and see multiple methods of Vectors

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    vector<int> vec1;   // Vec initializing with zero size
    vector<int> vec2(4);   // Vec ini with 4 size
    vector<int> vec3(vec2);  //Create vec3 with the help of vec2  (type must be same)
    vector<int> vec4(6,3);   // vec of 6 size with 3 as  ele ony

    int ele;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the num: ";
        cin >> ele;
        vec1.push_back(ele);
    }
    
    vec1.pop_back();
    
    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+3 , 5);       // insert(iterator (us index pe hona chhiye jahan value insert karane hai) , value)
    
    vec1.insert(iter+3 ,4, 5);       //   insert(iterator , n , value) interaror se value insert karega m times
    display( vec1);

    return 0;
}