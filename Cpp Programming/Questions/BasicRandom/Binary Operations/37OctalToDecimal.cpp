// Write a Program for Octal to Decimal Conversion.
/* Ex: Octal(199) to Decimal(199) = (1 x 2times8) + (9x 1times8) + (9x 0times8)*/

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
        decimalNum += (lastdigit*pow(8,digits));
        temp /= 10;
        digits++;
    }
    cout<<"Octal "<<octalVal<<" is decimal: "<<decimalNum;
    return 0;
}