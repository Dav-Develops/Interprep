//Write a Program to Calculate the Length of the String Using Recursion.
#include<iostream>
using namespace std;

int strLengthRec(string str, int &length){
    for(int i : str){
        length++;
    }
    return length;
}
int main(){
    string str = "This is a string";
    // Every character of a string is of 2 bytes, so the output will be = (number of characters in the 
    // strign X 2)
    int length =str.length();
    cout<<strLengthRec(str, length);
    return 0;
}