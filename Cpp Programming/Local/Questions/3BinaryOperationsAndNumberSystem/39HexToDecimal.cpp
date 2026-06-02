//Write a Program for Hexadecimal to Decimal Conversion.

/* Hexadecimals are in string format, so first we would have to convert the individual digits in
   integer format. Successively the calculation process will be implemented for conversion to decimal. */
#include<iostream>
#include<math.h>
using namespace std;

int stringToInt(char digit){
    if(digit >='0' && digit <= '9'){
        return int(digit- '0');
    }
    else if(digit >='A' && digit <= 'F'){
        return int(digit - 'A' + 10);
        //Ascii value of digit - Ascii value of 'A' + 10, output coverted to int.
    }
    else if(digit >='a' && digit <= 'f'){
        return int(digit- 'a' +10);
    }
    return -1;
}
int main(){
    string hexVal;
    cout<<"Enter a Hexadecimal Value: ";
    cin>>hexVal;
    int hexValLength = hexVal.length();
    int decimalVal=0;
    for(int i=0; i<=hexValLength-1; i++){
        int tempInteger = stringToInt(hexVal[hexValLength-1-i]); //size-i means, traversing from last.
        // cout<<hexVal[hexValLength-1-i]<<" ";
        
        decimalVal += tempInteger*pow(16,i);
    }
    cout<<"Hexadecimal "<<hexVal<<" in decimal is: "<<decimalVal;
    return 0;
}