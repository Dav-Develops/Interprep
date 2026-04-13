//Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator.

/* We can use bitwise XOR operation for equality check, it returns 0 for 2 equal/same digits.*/

#include<iostream>
using namespace std;

int main(){
    int a=10, b=5;
    (a^b) ? cout<<"Not Equal" : cout<<"Equal";
    return 0;
}