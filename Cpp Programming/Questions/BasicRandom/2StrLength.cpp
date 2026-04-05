// Write a Program to Find the Length of the String Without using strlen() Function.
#include<iostream>
using namespace std;

int main(){
    string str1 = "This is a sentence.";
    int length = 0;
    for(char ch : str1){
        length++;
    }
    cout<<"Sentence: "<<str1<<"\n Has the length: "<<length;
    return 0;
}