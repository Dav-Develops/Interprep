//Write a Program to Print a Diamond Pattern.
#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number of rows for the diamond pattern: ";
    cin>>num;

    for(int i=0; i<num; i++){
        for (int j=num-i;j>0;j--){
            // cout<<"-";
            cout<<" ";
        }
        for (int k=0;k<=i*2;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<num; i++){
        for (int j=0;j<=i;j++){
            // cout<<"-";
            cout<<" ";
        }
        for (int k=num*2;k>=(i*2)+2;k--){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}