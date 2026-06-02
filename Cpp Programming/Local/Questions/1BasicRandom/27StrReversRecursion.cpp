//Write a C++ Program to Print the Given String in Reverse Order Using Recursion.
#include<iostream>
#include<string>
using namespace std;

int revString(string &str, int n, int i){
    if(n<=i){
        return 1;
    }
    swap(str[i], str[n]);
    revString(str, n-1, i+1);
}

int main(){
    string str="This is a sentence in string format.";
    revString(str, str.length()-1, 0);
    cout<<str;
    return 0;
}