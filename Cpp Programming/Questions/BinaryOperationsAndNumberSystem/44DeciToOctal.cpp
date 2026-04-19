//Write a Program for Decimal to Octal Conversion.
#include<iostream>
using namespace std;

void deciToOctal(int deci){
    if(deci==0){return;}
    deciToOctal(deci/8);
    cout<<deci%8;
}

int main(){
    int Decimal_num;
    cout<<"Enter a number: ";
    cin>>Decimal_num;

    if(Decimal_num==0){
        cout<<0;
    }
    else{
        deciToOctal(Decimal_num);
    }
    
    return 0;
}