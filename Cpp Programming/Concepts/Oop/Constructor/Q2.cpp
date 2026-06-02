// Create a constructor with parameters. Pass values when creating Objects.
#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    string model;
    int year;

    Car(string x, string y, int z)
    {
        name = x;
        model = y;
        year = z;
    }
};
Car carObj1("Buggatti", "mk1", 2001);
Car carObj2("Porsche", "mk1", 2001);
int main()
{
    cout << carObj1.name << " " << carObj1.model << " " << carObj1.year;
    cout << "\n"
         << carObj2.name << " " << carObj2.model << " " << carObj2.year;
    return 0;
}