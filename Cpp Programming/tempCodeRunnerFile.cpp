/*Recursion is the technique of making a function call itself.
This technique provides a way to break complicated problems down into
simple problems which are easier to solve.*/

// Example: Addition of 1-10 numbers:

#include<iostream>
using namespace std;

int serialSum(int num)
{
    if (num > 0){
        return (num = (num - 1));
    }
}

int main(){
    int result = serialSum(10);
    cout<<result;
}