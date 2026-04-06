//Write a Program to Calculate the Sum of Elements in an Array.
#include<iostream>
using namespace std;

int arrSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of Array Elements is: "<<arrSum(arr,n)<<"\n";
    return 0;
}