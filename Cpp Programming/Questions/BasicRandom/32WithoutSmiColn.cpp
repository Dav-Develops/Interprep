//Write a Program to Print All Natural Numbers up to N Without Using a Semi-Colon.

#include<iostream>
using namespace std;

#define N 10
int main(){
    static int i=1;
    // 'static' means 'i' is initialized only at the first-time execution of the function it belongs to,
    // however it can be updated every time the function is called.
    if (cout<<i <<" "&& i++ < N && main()){

    }
    return 0;
}