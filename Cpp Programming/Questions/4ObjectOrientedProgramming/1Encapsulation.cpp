//Write a Program to Implement the Use of Encapsulation (means, use of 'private' keyword).
#include<iostream>
using namespace std;

class Encapsulating_SecretData{
    private: //data hidden from outer functions
    string name;

    public: //methods to set value of variable 'name'
    void setter(string n){name=n;}

    ////methods to get / return value of variable 'name'
    string getter(){ return name;}
    
};
int main(){
    Encapsulating_SecretData e1;
    e1.setter("Skyrocket");
    cout<<e1.getter();
    return 0;
}