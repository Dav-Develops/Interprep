/*Recursion is the technique of making a function call itself.
This technique provides a way to break complicated problems down into
simple problems which are easier to solve.*/

// Example1: Addition of 1-10 numbers:
// Example2: Factorial of a Number:

#include<iostream>
using namespace std;

//Addition Logic:
int serialSum(int num)
{
    if (num > 0){
        return (num += serialSum(num - 1));
    }
    num--;
}

//Factorial Logic:
int fact(int n){
    if (n>=1){
        return (n*fact(n-1));
    }
    else{
        return 1;
    }
}
int main(){
    int result = serialSum(10);
    cout<<"Sum of 1-10: "<<result;

    int factorial = fact(5);
    cout<<"\nFactorial of 5: "<<factorial;
}