#include<iostream>
using namespace std;

template<typename T>
class Box{
    public:
    Box(T v){ //The constructor 'Box' is with 'template' data type.
        cout<<v<<"\n";
    }
};
int main(){
    Box<int>(10); //Use template as int.
    Box<float>(3.14); //Use template as float.
    return 0;
}