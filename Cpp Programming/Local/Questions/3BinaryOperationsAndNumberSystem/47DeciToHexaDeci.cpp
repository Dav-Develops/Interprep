//Write a Program for Decimal to Hexadecimal Conversion.
#include<iostream>
using namespace std;

void deciToHexaDeci(int Deci){
    if(Deci==0){return;}
    deciToHexaDeci(Deci/16);
    int rem = Deci%16;
    if(rem < 10){
        cout<<rem;
    }
    else{
        cout<<char('A'+(rem - 10)); // '-10' because the maximum reminder can be 15 when n%16.
                                    // So 15-10 goes upto A+5 = F.
    }
}
int main(){
    int Decimal_num;
    cout<<"Enter a number: ";
    cin>>Decimal_num;
    if(Decimal_num==0){
        cout<<0;
    }
    else(deciToHexaDeci(Decimal_num));
    
    return 0;
}