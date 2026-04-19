// Write a Program for Binary to Decimal Conversion.

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int octalVal,temp,digits=0,decimalNum=0, lastdigit=0;
    cout<<"Enter an Octal value: ";
    cin>>octalVal;
    temp=octalVal;
    while(temp>0){
        lastdigit=temp%10;
        decimalNum += (lastdigit*pow(2,digits));
        temp /= 10;
        digits++;
    }
    cout<<"Octal "<<octalVal<<" is decimal: "<<decimalNum;
    return 0;
}