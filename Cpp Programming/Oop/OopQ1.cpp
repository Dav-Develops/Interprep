//Create a class Dog with a method bark() that prints "Woof!".
//Then call that method from main() using an object of the class.

#include<iostream>
using namespace std;

class Dog {
    public:
    void bark(){
        cout<<"woof!";
    }
};

int main(){
    Dog Labrador;
    Labrador.bark();
    return 0;
}