/*A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

Syntex:
set<datatype> setName.

    The set are automatically sorted in ascending order, Alphabetically, when we store alphabetical characters or
    strings, and automatically sorted numerically if we store integers in the set.

*/

#include <iostream>
#include <set>
using namespace std;

void printSetNumbers(set <int> set1)
{
    for (int num : set1)
    {
        cout << num << " ";
    }
}

int main()
{
    // We can add elements at the time of declaration, place them in a comma-separated list, inside curly braces {}:
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (string car : cars)
    {
        cout << car << " ";
    }

    set<int> numbers = {1, 7, 3, 2, 5, 9};
    // Print set elements
    cout << endl
         << "Automatically sorted in sets: ";
    printSetNumbers(numbers);

    // By default, the elements in a set are sorted in ascending order. If you want to reverse the
    // order, you can use the greater<type> functor inside the angle brackets, like this:

    set<int, greater<int>> numbers1 = {1, 43, 2, 4, 6, 7, 4, 3, 356, 768, 7, 243, 0}; // duplicates always auto revomed from sets.
    cout << endl
         << "Sorted in Reverse order: ";
    for (int num : numbers1)
    {
        cout << num << " ";
    }

    //.erase(element) is used to erase an element from a set:
    numbers1.erase(356);
    //.insert(element) is used to add new elements in a set:
    cout<<"\n\n";
    numbers1.insert(1010);
        for (int num : numbers1)
    {
        cout << num << " ";
    }
    //.size() to get number of elements in a set:
    cout<<endl<<"Total Elements: "<<numbers1.size();

    //.clear() is used to clear out all elements of a set:
    numbers1.clear();
    //.empty() is used to check if a set is empty or not:
    cout<<endl<<numbers1.empty(); //If empty, it returns 1, otherwise returns 0;
    return 0;
}