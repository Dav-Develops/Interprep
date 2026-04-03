/*A virtual function is a member function in the base class that can be overridden in derived classes.
Virtual functions are a key part of polymorphism in C++. They let different objects respond differently 
to the same function call.

Without virtual, C++ decides which function to call based on the pointer type, not the actual
object type.
With virtual, it checks the actual object the pointer is pointing to.*/

//Example (1): Without the Virtual function:
#include<iostream>
using namespace std;
class Animal{   //base class with virtual functions
    public:
    virtual void sound(){
        cout<<"Animal sound from base class 'Animal'";
    }
    virtual void a1(){
        cout<<"Animal's a1 from base class 'Animal'";
    }
    virtual void a2(){
        cout<<"Animal's a2 from base class 'Animal'";
    }
};
class dog: public Animal{ //derived class with with overriding the base class methods.
    public:
    void sound ()override{
        cout<<"bow wow from derived class 'dog'";
    }
};
class A1: public Animal{ //derived class with with overriding the base class methods.
    void a1 ()override{
        cout<<"\na1 Speaking from derived class 'A1'";
    }
    void a2 ()override{
        cout<<"\na2 Speaking from derived class 'A1'";
    }

};
int main(){
    Animal* A; //declaring object-pointer;
    // A = new Animal();
    // A->sound();
    // delete A;
    dog d;
    A = &d; //assigning address of dog object to base class pointer-Object;
    A->sound(); //means go what the 'A' poiting at, and call that's 'sound()';

    A1 abc;
    A = &abc; //Now 'A' pointing to 'abc' object of the class A1;
    A->a1(); //saying, go what the 'A' poiting at, and call that's 'sound()';
    A->a2(); //saying, go what the 'A' poiting at, and call that's 'sound()';
    return 0;
}