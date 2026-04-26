/*In the previous chapters, you learned that data structures (like vectors, lists, etc) are used to store and organize data.
Algorithms are used to solve problems by sorting, searching, and manipulating data structures.

The <algorithm> library provides many useful functions to perform these tasks with iterators.
To use these functions, you must include the <algorithm> header file:
*/
#include <iostream>
#include "Header_files.h"//😎Yes, We can import / include custom header files in cpp.

// #include <bits/stdc++.h> //This header files includes almost everything in single line.
// But it is slower to compile and includes a lot of unnecessary stuff.
using namespace std;

int main()
//Note: These Algorithms works on all data containers, but not on data adapters(stack and queue).
{
    vector<int> serialNumber = {5, 679, 9, 9, 7, 65, 4, 3, 3, 2, 5, 6, 7, 8, 999};
    //(1). 👉🏻 sort() //For sorting (by default in ascending order)
    sort(serialNumber.begin(), serialNumber.end());
    //To sort in descending order, use 'rbegin() and rend()'.

    for (auto iterator = serialNumber.begin(); iterator != serialNumber.end(); ++iterator)
    //To only sort specific elements: begin()+ 3, it will sort all after 3rd element.
    {
        cout << *iterator << " ";
    }
    cout << "\n";



    vector<string> reverseAlphabeticalOrder = {" uhiefh hds cds ia laef naier   mzn nc,z iodj w"};
    // To sort in reverse order:
    sort(reverseAlphabeticalOrder.rbegin(), reverseAlphabeticalOrder.rend());
    for (string str1 : reverseAlphabeticalOrder)
    {
        cout << str1 << " ";
    }cout<<"\n";
    // Note👉: Stack and Queue are not containers, they are adapters (means wrapper over another container
    // , restricting/adding a few features). So they can't be sorted directly, first we have to store their
    // elements into other container, then perform suck operations. Indirect approach.

    //(2). 👉🏻 find(startIterator, endIterator, valueToFind) to find someting, takes 3 parameters;
    //          It works on sorted data.
    auto it = find(serialNumber.begin(), serialNumber.end(), 3);

  // Check if the number 3 was found
  if (it != serialNumber.end()) {
    //Memory wise Iterator looks like :begin() → 1 ,  2 ,  3 ,  end();
    //So if '3' is found, Iterator points to '3', Otherwise it points to end();
    //Therefore if 'it!=end, means '3' exists in vector. 
    // cout<<*it;
    cout << "The number 3 was found!" << "\n";
  } else {
    cout << "The number 3 was not found." << "\n";
  }
  
  //(3). 👉🏻 upper_bound() to search a value greater than something;
  //The upper_bound() function is typically used on sorted data structures.
  auto itgreaterthan= upper_bound(serialNumber.begin(), serialNumber.end(), 5); //seraching value greater than 5
  cout<<*itgreaterthan<<"\n";
  //(4). , (5). 👉🏻 min_element() and max_element() are used to find minimum and maximum elements.
  auto itMin = min_element(serialNumber.begin(), serialNumber.end());
  cout<<"Minimum: "<<*itMin<<"\n";
  auto itMax = max_element(serialNumber.begin(), serialNumber.end());
  cout<<"Maximum: "<<*itMax<<"\n";

  //(6). 👉🏻 copy() To copy elements from 1 to another vector.
  vector<string> source={"This is string to be copied using copy()"};
  vector<string> destination(source.size());
  auto itcopy = copy(source.begin(), source.end(), destination.begin());
//   cout<<*itcopy;
  for (string d:destination){
    cout<<d;
  }cout<<"\n";

  //(7). 👉🏻 fill() is used to replace every element with provided value;
  string value="This value is being filled in a vector using a function 'fill()'.";
  vector<string> filledWithfill(2);//2 empty slots OR size=2
  vector<string> filledWithfill1={"1","2"};//2 values
  //The replace will work same for above both vectors.
  fill(filledWithfill.begin(),filledWithfill.end(), value);
  for(string s:filledWithfill){
    cout<<s;
  }
    return 0;
}