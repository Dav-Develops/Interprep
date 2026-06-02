// Write a Program to Print a Pyramid Pattern.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> num;
    for(int i=1; i<=num; i++){
        for(int j=num; j>i; j--){
            // cout<<"-";
            cout<<" ";
        }
        for(int k=1; k<=(i*2)-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}