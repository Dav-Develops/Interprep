/*In C++, you can have more than one constructor in the same class. This is called constructor overloading.
Each constructor must have a different number or type of parameters, as same as 'function overloading'.*/

//Question: If a driver has submitted his car's documents, then the car's info(like name,model) is
//          known, otherwise/before that, unknown.

#include<iostream>
using namespace std;

class Car{
    public:
    string carName;
    string carModel;
    string ownerName;
    //Data before registration:
    Car(){
        carName = "unknown";
        carModel = "unknown";
        ownerName = "unknown";
    }
    //Data after registration:
    Car(string cn,string cm,string on){
        carName = cn;
        carModel = cm;
        ownerName = on;
    }
};
int main(){
    //Object decleration:
    Car notSubmitted;
    Car entry1("BMW","X5","BMW");
    Car entry2("Volkswagon","Golf","John");
    
    //Display Vehicle List:
    cout<<"Entries without registration: "<<notSubmitted.carName<<" "<<notSubmitted.carModel<<" "<<notSubmitted.ownerName;
    cout<<"\nEntries with registration: "<<entry1.carName<<" "<<entry1.carModel<<" "<<entry1.ownerName;
    cout<<"\n"<<entry2.carName<<" "<<entry2.carModel<<" "<<entry2.ownerName;
    
    return 0;
}