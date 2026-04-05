// Write a Program to Find a Leap Year or Not.
#include<iostream>
using namespace std;
int checkLeap(int year){
    if(year%400==0){
        return 1;
    }
    else if(year%100==0){
        return 0;
    }
    else if(year %4==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    checkLeap(year) ? cout<<year<<" is a leap year." : cout<<year<<" is not a leap year.";
    
    return 0;
}