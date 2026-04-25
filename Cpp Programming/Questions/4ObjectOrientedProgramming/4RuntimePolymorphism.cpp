//Write a Program to Implement the Concept of Function Overriding or Runtime Polymorphism.
#include<iostream>
using namespace std;

class RuntimePolymorphism1{
    public:
    virtual void displayData(string message){
        cout<<"This data is from base class: "<<message<<", "<<"\n";
    }
    void show(){
        cout<<"Hello, this is show from base class."<<"\n";
    }
};
class RTPoly2 : public RuntimePolymorphism1{
    public:
    void displayData(string message) override {
        cout<<"Child Class presenting this data: "<<message<<"\n";
    }
    void show(){
        cout<<"Child class's show is speaking."<<"\n";
    }
};

int main(){
    RuntimePolymorphism1* R1base;
    RTPoly2 r2child;

    //Base class's pointer is pointing to 2nd class's object
    R1base= & r2child;
    R1base->displayData("Hi"); //displayData() function is overriden, so executed that of 2nd class.

    R1base->show(); //Non-Virtual function, binded at compile time.
    
    return 0;
}