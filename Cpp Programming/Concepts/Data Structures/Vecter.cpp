/*A vector in C++ is like a resizable array.
Both vectors and arrays are data structures used to store multiple elements of the same data type.
The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.

To use a vector, you have to include the <vector> header file:

Syntex: 
    vector<type> vectorName.

    (where type is the data type)
*/

#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <string> cars = {"BMW", "Volvo","Porsche","Ford","Bugatti"};
    //values are accessible with index:
    cout<<cars[3]<<endl;

    //values can be changed:
    cars[4]="Tata";

    //vector is almost same as array, however provides varies built-in functions as:
    //to get value at any index:
    cout<<cars.at(1)<<endl;

    //Get First element:
    cout<<"Frontman: "<<cars.front()<<endl;

    //Get last element:
    cout<<"last value: "<<cars.back()<<endl;

    //The biggest difference between array and vector is that, elements can be added ir removed
    // from vector dynamically. vector follows FIFO from last side.
    //Adding 1 element at last: we can add as many as needed.
    cout<<"Vector Size: "<<cars.size()<<endl;
    cars.push_back("Rolls");
    cars.push_back("Swift");
    cout<<"Vector Size: "<<cars.size()<<endl;

    //Removing 1 element from last:
    cars.pop_back();

    // .size() for vector size:
    cout<<"Vector Size: "<<cars.size()<<endl;
    // For both side insertion and deletion, use 'deque'.

    // empty() to check if a vector is empty or not:
    cout<<cars.empty()<<" returned zero, means not empty"<<endl;
    return 0;
}