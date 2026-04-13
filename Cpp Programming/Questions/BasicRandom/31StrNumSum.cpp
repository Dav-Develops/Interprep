//Write a Program to Count the Sum of Numbers in a String.
#include<iostream>
#include<string>
using namespace std;
// ------------------Pending Yet--------------------------
int strNumSum(string str, int sum){
    for(int i: str){
        if(isdigit(i)){
            sum+= i;
        }
    }
    return sum;
}
int main(){
    string str="this 1 is 2 a 3 string 4containing 5 a 6 few7 numbers8 9, 10.";
    int sum=0;
    cout<<strNumSum(str, sum);
    return 0;
}