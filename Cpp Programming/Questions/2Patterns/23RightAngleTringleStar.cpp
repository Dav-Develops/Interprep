//Write a Program to Print a Right-angled Triangle Star Pattern.
#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}