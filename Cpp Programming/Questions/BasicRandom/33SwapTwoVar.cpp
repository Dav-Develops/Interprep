//Write a Program to  Swap the Values of Two Variables Without Using any Extra Variable.
#include<iostream>
using namespace std;


int main(){
    int num1,num2;
    cout<<"Enter Two number: ";
    cin>>num1>>num2;
    cout<<"Before Swap: "<<num1<<" "<<num2;

    //Logic:
    num1 +=num2;
    num2 = num1-num2;
    num1 = num1-num2;
    cout<<"\nAfter Swap: "<<num1<<" "<<num2;
    return 0;
}