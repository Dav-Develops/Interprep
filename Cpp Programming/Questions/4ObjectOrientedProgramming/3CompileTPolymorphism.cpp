//Write a Program to Implement the Concept of Compile-Time Polymorphism or Function Overloading.
/* Compile-Time polymorphism or Function Overloading means, using various functions with same name
   but with different properties/ different working.*/
#include<iostream>
using namespace std;

class FuncOverloading{
    public:
    void func(int a){
        cout<<"Captured Data is: "<<a<<"\n";
    }
    void func(double a){
        cout<<"Captured Data is: "<<a<<"\n";
    }
    void func(string a){
        cout<<"Captured Data is: "<<a<<"\n";
    }
    void func(int a, int b){
        cout<<"Captured Data is: "<<a<<" "<<b;
    }
};
int main(){
    FuncOverloading o1;
    o1.func(10);
    o1.func(12.9);
    o1.func("stringthundering");
    o1.func(100, 200);
    
    return 0;
};