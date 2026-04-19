//Write a Program to Implement the Concept of Compile-Time Polymorphism or Function Overloading.
#include<iostream>
using namespace std;

class FuncOverloading{
    public:
    void func(int a){
        cout<<"Captured Data is: "<<a<<endl;
    }
    void func(double a){
        cout<<"Captured Data is: "<<a<<endl;
    }
    void func(string a){
        cout<<"Captured Data is: "<<a<<endl;
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