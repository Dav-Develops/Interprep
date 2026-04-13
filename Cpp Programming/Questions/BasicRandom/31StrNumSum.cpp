//Write a Program to Count the Sum of Numbers in a String.
#include<iostream>
#include<string>
using namespace std;
// ------------------Pending Yet--------------------------
int strNumSum(string str, int sum){
    for(char i: str){
        if(isdigit(i)){
            sum+= i-'0';
            // in Cpp, char is an integer, representing the ascii values of characters.
            // So print('1' - '0') indicates --> (49-48) = 1
            cout<<i<<" ";
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