//Pass a structure to a function as an argument.

// 1. Pass by value:
#include<iostream>
using namespace std;
struct Car{
    string brand;
    int year;
};

void carInfo(Car c1){
    cout<<"Brand: "<<c1.brand<<"\nYear: "<<c1.year;
}

// 2. Pass by reference:
    void updateYear(Car &c){
        c.year++;
    }

int main(){
    Car car1 = {"Buggati", 2010};
    carInfo(car1);
    updateYear(car1); //Year Updated
    cout<<"\nNext Year: "<<car1.year;
    
return 0;
}
