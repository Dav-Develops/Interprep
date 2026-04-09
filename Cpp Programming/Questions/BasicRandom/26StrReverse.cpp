//Write a Program to Print the Given String in Reverse Order .
#include<iostream>
using namespace std;


int main(){
    string str="GeeksForGeeks";
    int streLen=str.length();
    for(int i=streLen-1; i>=0; i--){
        cout<<str[i];
    }
    return 0;
}