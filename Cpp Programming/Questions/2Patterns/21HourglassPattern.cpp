// Write a Program to Print the Hourglass Pattern.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> num;
    for(int i=0; i<num; i++){
        for(int j=0; j<=(i)-1; j++){
            // cout<<"-";
            cout<<" ";
        }
        for(int k=(num-i)*2; k>1; k--){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<num; i++){
        for(int j=(num-i); j>1; j--){
            // cout<<"-";
            cout<<" ";
        }
        for(int k=0; k<(i*2)+1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}