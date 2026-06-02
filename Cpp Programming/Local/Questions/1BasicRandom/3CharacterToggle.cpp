// Write a Program to Toggle Each Character to upper or lower case in a String.
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str1 = "GeeksForGeek";

    for (char &ch : str1){
        if(isupper(ch)){
            ch=tolower(ch);
        }
        else if(islower(ch)){
        ch=toupper(ch);
        }
    }
    cout<<str1;
    return 0;
}
