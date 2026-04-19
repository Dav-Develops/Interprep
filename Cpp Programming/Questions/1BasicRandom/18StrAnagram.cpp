//Write a Program to Check if Two Strings are Anagram or Not.
//Two strings containing equal number of same characters (in any order) are called Anagrams.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string checkAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return "No";
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1 == str2){
        return "Yes";
    }
    return "No";
}
int main(){
    string str1 = "listen";
    string str2 = "silent";
    cout << checkAnagram(str1, str2) << endl;
    return 0;
}