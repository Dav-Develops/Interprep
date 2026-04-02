/*Inheritance allows one class to reuse attributes and methods from another class. It helps you write
 cleaner, more efficient code by avoiding duplication.

 We group the "inheritance concept" into two categories:
    derived class (child) - the class that inherits from another class
    base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.
 */
// Example: Creating two vehicles of a brand and displaying their honk 😄.

#include <iostream>
using namespace std;

class vehicles
{
public:
    string brand = "Ford";

    struct honkType
    {
        string truck = "baaam";
        string car = "beep";
    };
    string honk(string vehicleType)
    {
        if (vehicleType == "truck")
        {
            return "baam";
        }
        else if (vehicleType == "car")
        {
            return "beep";
        }
        else
        {
            return "honk not installed";
        }
    }
};

class Car: public vehicles {
    public:
    string vehicletype = "car";
};
int main()
{
    Car c1;
    string honkType = c1.vehicletype;
    cout<<"Vehicle : "<<c1.vehicletype<<"\nBrand: "<<c1.brand<<"\nHonks: "<<c1.honk(honkType)<<endl;
    return 0;
}