//Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator.
#include<iostream>
using namespace std;


int main(){
    // int a=10, b=5;
    int a,b;
    cout<<"Enter Two numbers:" ;
    cin>>a>>b;
    cout<<"Max: "<< ((a+b) + abs(a-b))/2<<endl;
    cout<<"Min: "<< ((a+b) - abs(a-b))/2;
    return 0;
}