//Write a Program to Check the Prime Number.
#include<iostream>
using namespace std;

int main(){
    int n = 3;
    bool prime;
    if(n<0){
        prime =false;
    }
    for (int i=2;i<n; i++){
        if(n%i==0){
            prime= false;
        }
        prime =true;

    }
    prime ? cout<<n<<" is a prime number." : cout<<n<<" is not a prime number.";
    return 0;
}