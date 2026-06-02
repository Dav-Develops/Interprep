// Write a Program to Find the Second Smallest Element in an Array.
#include<iostream>
#include<climits>
using namespace std;

int findSecondSmallestnumber(int arr1[], int n){
    int min=arr1[0];
    int secondMin = INT_MAX;
    if(n<2){
        cout<<"Invalid Input";
        return -1;

    }
    for (int i=0; i<n;i++){
        if(arr1[i] < min){
            cout<<"Hello";
            secondMin=min;
            cout<<secondMin<<"\n";
            min = arr1[i];
        }
        else if(arr1[i] < secondMin && arr1[i]!=min){
            secondMin=arr1[i];
        }
    }
    return secondMin;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 9, 8, 4, 5, 7, 3, 2, 5, 7, 9, 700, 589, 9090};
    // int arr[] = {12,2,2,2,2,2,2,2,2,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Second Smallest Element is: "<<findSecondSmallestnumber(arr,n)<<"\n";
    return 0;
}