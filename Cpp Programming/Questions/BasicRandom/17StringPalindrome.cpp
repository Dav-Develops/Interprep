// Write a Program to Check if the Given String is Palindrome or Not.
#include<iostream>
using namespace std;

string checkStrPalindrome(string str){
    for(int i=0;i<str.length(); i++){
        if(str[i] != str[str.length()-i-1])
        {return "No";}
    }
    return "Yes";
}
int main(){
    string str="GeekeeG";
    cout<<checkStrPalindrome(str);
    return 0;
}