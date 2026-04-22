/*A deque (stands for double-ended queue) however, is more flexible, as elements can be
added and removed from both ends (at the front and the back). You can also access elements by
index numbers.
Syntex:
deque<datatype> dequeName.

Deque can also be initialized at the time of decleration, using '{}' curly brackets for values.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars)
    {
        cout << car << "\n";
    }
    // Get the first element
    cout << cars[0]<<endl; // Outputs Volvo

    // Get the second element
    cout << cars[1]<<endl; // Outputs BMW

    //.front() and .back() are used to access the first and the last element of a deque:
    // Get the first element
    cout << cars.front()<<endl;

    // Get the last element
    cout << cars.back()<<endl;

    // To access an element at a specified index, we can use the .at() function and specify the index number:

    // Get the second element
    cout << cars.at(1)<<endl;

    // Get the third element
    cout << cars.at(2)<<endl;

    // Change the value of the first element
    cars[0] = "Opel";
    cout << cars[0]<<endl; // Now outputs Opel instead of Volvo

    // However it is safer to used .at() function, with working with deque indecies:
    //  Change the value of the first element
    cars.at(0) = "Goblin";
    cout << cars.at(0)<<endl; // Now outputs Goblin instead of Opel

    //.push_front() and .push_back()to add elements to deque
    cars.push_front("Tesla");
    //.pop_front() and pop_back to remove deque elements
    cars.pop_back();

    //.size() is used to get the number of elements of a deque
    cout << cars.size()<<endl;  // Outputs 4
    return 0;
}