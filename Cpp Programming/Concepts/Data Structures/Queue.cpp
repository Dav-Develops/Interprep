/*A queue stores multiple elements in a specific order, called FIFO.
FIFO stands for First in, First Out.

Elements in the queue are not accessed by index numbers. Since queue elements are added at the end
and removed from the front, you can only access an element at the front or the back.
Syntex:
queue<datatype> queueName.

We cannot add elements to the queue at the time of declaration.
Think of it like a queue, where people enter from one side and exit from the other side.
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> cars;

    //.push() to Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    //.front() to Access the front element (first and oldest)
    cout << cars.front()<<endl; // Outputs "Volvo"

    //.back() to Access the back element (last and newest)
    cout << cars.back()<<endl; // Outputs "Mazda"

    // We can also use .front and .back to change the value of the front and back elements:
    //  Change the value of the front element
    cars.front() = "Tesla";

    // Change the value of the back element
    cars.back() = "VW";

    // Access the front element
    cout << cars.front()<<endl; // Now outputs "Tesla" instead of "Volvo"

    // Access the back element
    cout << cars.back()<<endl; // Now outputs "VW" instead of "Mazda"

    //.pop() is used to function to remove an element from the queue.
    // Remove the front element (Volvo)
    cars.pop();

    // Access the front element (Now BMW)
    cout << cars.front()<<endl;

    //.size() is used to find out how many elements there are in a queue:
    cout << cars.size()<<endl;

    //.empty() function returns 1 (true) if the queue is empty and 0 (false) otherwise:
    cout << cars.empty()<<endl;
    return 0;
}