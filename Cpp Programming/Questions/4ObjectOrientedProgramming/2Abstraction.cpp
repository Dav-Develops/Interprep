//Write a Program to Implement the Concept of Abstraction.
#include<iostream>
using namespace std;

class Abstracting_Info{
    private:
    int secretCode;

    public:
    void setter(int n){ secretCode=n;}

    void display(){
        cout<<"Exposing the secretCode for charity 😄: "<<secretCode;
    }
    
};
int main(){
    Abstracting_Info a1;
    a1.setter(90890999);
    a1.display();
    return 0;
};