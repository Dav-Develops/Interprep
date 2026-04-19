// Write a Program to print an Inverted Pyramid.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            // cout<<"-";
            cout<<" ";
        }
        for(int k=num*2; k>=i*2; k--){
            cout<<"*";
        } cout<<endl;
    }
    return 0;
}