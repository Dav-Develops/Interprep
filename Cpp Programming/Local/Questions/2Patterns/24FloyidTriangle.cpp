//Write a Program to Print Floyd's Triangle.
#include<iostream>
using namespace std;


int main(){
    int Rows,n=1;
    cout<<"Enter number of Rows: ";
    cin>>Rows ;
    for(int i=1; i<=Rows ; i++){
        for(int j=1; j<=i; j++){
            cout<<n++<<" ";
            // n++;
        }
        cout<<"\n";
    }
    return 0;
}