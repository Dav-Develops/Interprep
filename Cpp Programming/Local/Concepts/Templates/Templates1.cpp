/*Templates let you write a function or class that works with different data types.
  They help avoid repeating code and make programs more flexible.
  Keywords:'template', 'typename'
  ----------✍-Main thing to use templates-> 'template<typename T>' --------------
  */
//  Example:
#include<iostream>
using namespace std;

template <typename T>//T is a placeholder for a data type (means it works as a data type)
                     // (like int, float, etc.), we can use any name/letter here.
T add(T a, T b){
    return (a+b);
} //However, we have to define/tell the type while accessing this function. As given below:
int main(){
    
    cout<<add<int>(5,10)<<endl; //Telling to compiler to use integer_type a the place of 'T'.
    cout<<"\n"<<add<float>(3.5,7.2)<<endl; //Telling to compiler to use float_type at 'T'.
    return 0;
}