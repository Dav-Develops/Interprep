/*In C++, you can have more than one constructor in the same class. This is called constructor overloading.
Each constructor must have a different number or type of parameters, as same as 'function overloading'.*/

// Question: Store Car Enties with their properties/data (name, model, ownername), and print that data.
//------------------Note: Same Question as 'Q3.cpp' but with dynamic object creation-----------------------

#include <iostream>
#include <vector>
using namespace std;

class Car
{
public:
    string carName;
    string carModel;
    string ownerName;

    Car(string cn, string cm, string on) //Constructor definition
    {
        carName = cn;
        carModel = cm;
        ownerName = on;
    }
};
int main()
{
    int totalEntries;       //Upto user's choice.
    cout << "Total Entries: ";
    cin >> totalEntries;

    auto carsCollection = [](int n) -> vector<Car> // Lambda function that returns a vector<Car>
    {
        vector<Car> cars; //vector of a class type named 'cars', to store class-objects.

        cars.reserve(n);    //.reserve() to clear any previous memory,(reduces space complexity.😄)
        for (int i = 0; i < n ; i++)
        {
            string cn, cm, on;
            cout << "Car Name: ";
            cin >> cn;
            cout << "Car Model: ";
            cin >> cm;
            cout << "Owner Name: ";
            cin >> on;
            cars.emplace_back(cn, cm, on); // creating objects of 'Car' directly in the vector.
        }
        return cars;
    };
    vector<Car> carData = carsCollection(totalEntries); //The values/Objects returned from 'forLoop' of
                                                        // 'carsCollection' function is stored here as Objects.
    
    // Display Vehicle List:
    cout<<"\n\n";
    for (int i=0; i < carData.size(); i++){
        cout<<carData[i].carName << " " << carData[i].carModel << " " << carData[i].ownerName << endl;
    }
    return 0;
}