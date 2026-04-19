//Write a Program to Check Palindrome.
#include<iostream>
using namespace std;

int checkPalindrome(int n){
    int reversed=0;
    int temp=n;
    while(temp!=0){
        reversed = (reversed*10) + (temp%10);
        temp=temp/10;
    }
    return (reversed==n);
}
int main(){
    int n=12321;
    if(checkPalindrome(n))
    cout<<"Yes, it is a palindrome."<<endl;
    else
    cout<<"No, it is not a palindrome."<<endl;

    return 0;
}