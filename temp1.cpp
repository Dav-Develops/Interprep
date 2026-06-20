#include<iostream>
using namespace std;


int main(){
    int i=1,k=5,count=1;
    while(i<=5){
        cout<<count<<" ";
        count++;
        int j=1;
        while(j<=k){
            count++;
            j++;
        }
        i++;
    }
    return 0;
}