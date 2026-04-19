//// Write a program for Decimal to binary conversion, using recursion.
#include<iostream>
using namespace std;

void deciToBinary(int Decimal){
    if(Decimal==0){return;}

    deciToBinary(Decimal/2); //First goes down / get executed to decimal=0, then if block triggered 
                            // and then cout statement (of all executed functions) works (down to upside).
    cout<<Decimal%2;
}
int main(){
    int Decimal_num;
    cout<<"Enter a number: ";
    cin>>Decimal_num;
    if(Decimal_num==0){
        cout<<0;
    }
    else (deciToBinary(Decimal_num));
    
    return 0;
}