//Write a Program to Calculate the Factorial of a Number Using Recursion.
#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long value){
    if(value==0 || value ==1){
        return 1;
    }
    return value*factorial(value-1);
}
// 'unsigned' means the values without negative(-ve) sign, means only +ve values.
// 'long' means 'long integer'.
int main(){
    unsigned long long num;
    cout<<"Enter a number to get its factorial: ";
    cin>>num;
    cout<<factorial(num);
    return 0;
}