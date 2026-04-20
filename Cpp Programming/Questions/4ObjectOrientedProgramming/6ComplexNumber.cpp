//Write a Program to Create a Class for Complex Numbers.
#include<iostream>
using namespace std;

class Complex {
    private:
    double real,imag;
    public:
    Complex() : real(0), imag(0) {}; //default constructor 'optional', good practice.

    Complex(double r, double i) : real(r), imag(i) {}; //Parameterized constructor to initialise 
                                                    //with Original values.
    //utility function
    void print() const {
        cout<<real<<" i"<<imag<<endl;
    }

    //Operator Overloading
    //Operator+
    Complex operator+(Complex &obj){
        return Complex(real+obj.real, imag+obj.imag);
    }
    //Operator-
    Complex operator-(Complex &obj){
        return Complex(real-obj.real, imag-obj.imag);
    }

    //operator*
    Complex operator*(Complex &obj){
        return Complex(
            real*obj.real-imag*obj.imag, //real part of complex number
            real*obj.imag+ imag*obj.real //imaginary part of complex number
        );
    }
};
int main(){
    Complex a(2,10), b(3,20);
    Complex c,d,e;
    c=a+b;
    d=a-b;
    e=a*b;
    
    Complex* Objects[5]={&a,&b,&c,&d,&e};
    int totalObjects = sizeof(Objects)/sizeof(Objects[0]);
    for(int i=0; i<totalObjects; i++){
        Objects[i]->print();
    }
    // a.print();
    // b.print();
    // c.print();
    return 0;
}