//14. Write a Program to Find the Factorial of a Number Using Loops.
#include<iostream>
using namespace std;
int factorial(int fact){
    int result=1;;
    if (fact!=0){
    while(fact>0){
        result*=fact;
        fact--;
    }
}
else if(fact==0){
    result=1;
}
    return result;
}
int main(){
    int n;
    cout<<"Find factorial of: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    
    return 0;
}