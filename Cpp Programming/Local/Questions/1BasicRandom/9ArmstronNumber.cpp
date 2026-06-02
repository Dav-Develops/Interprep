// /Write a Program to Check Whether a Number is an Armstrong Number or Not.
#include<iostream>
using namespace std;

// Built-in 'pow()' function in '<cmath>' gives wrong answer for some numbers after round off, so i've
// implemented a custom power function to avoid this issue.

int power(int base, int exponent){
    int result =1;
    for (int i=0; i< exponent; i++){
        result *= base;
    }
    return result;
}
int armstrong(int n){
    int original=n,n1 =n;
    int lastDigit=0;
    int digits=0;
    int ans=0;

    while(n!=0){
        lastDigit=n%10;
        n/=10;
        digits++;
    }
    while(n1!=0){
        lastDigit=n1%10;
        n1/=10;
        ans = ans+ power(lastDigit,digits);
        cout<<ans<<"\n";
    }
    return ans==original;
}
int main(){
    // cout << armstrong(1634) << "\n";
    armstrong(153)? cout<<"Armstrong Number"<<"\n": cout<<"Not an Armstrong Number"<<"\n";
    return 0;
}