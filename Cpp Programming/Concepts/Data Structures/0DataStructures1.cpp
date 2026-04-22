// Data Structures: are used to store and organize data.
/*
Data Structure	Description
Vector	        Stores elements like an array but can dynamically change in size. Adding and removing of elements are usually done at the end. Elements can be accessed by index.
List	        Stores elements sequentially, where each element is connected to the next. Adding and removing of elements can be done at both ends. Not accessible by index.
Stack	        Stores elements in a specific order, called LIFO (Last In, First Out), where elements can only be added and removed from the top. Not accessible by index.
Queue	        Stores elements in a specific order, called FIFO (First In, First Out), where elements are added at the end and removed from the front. Not accessible by index.
Deque	        Stores elements in a double-ended queue, where elements can be added and removed from both ends. Elements can be accessed by index.
Set	Stores      unique elements. Not accessible by index.
Map	Stores      elements in "key/value" pairs. Accessible by keys (not by index).
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  // vector with integers
  vector<int> ints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // vector with doubles
  vector<double> doubles = {3089.89, 4987.9798, 09767.78, 67.57689};
  ;
  // vector with characters
  vector<char> chars = {
      'W',
      'B',
      'c',
      'd',
      'e',
      'f',
      'g',
  };

  // Print vector elements
  for (string car : cars)
  {
    cout << car << "\n";
  }
  for (int i : ints)
  {
    cout << i << "\n";
  }
  for (double d : doubles)
  {
    cout << d << "\n";
  }
  for (char c : chars)
  {
    cout << c << "\n";
  }
  return 0;
}
/*
Key Concepts of the STL
    The key components of the STL consist of containers,
    iterators, and algorithms, and the relationship between them :

    Containers are data structures that provides a way to store data,
    like vectors, lists, etc.Iterators are objects used to access elements of a data structure.
    Algorithms include functions, like sort() and find(), that perform operations on data structures through iterators.
    */