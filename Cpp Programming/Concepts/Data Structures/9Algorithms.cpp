/*In the previous chapters, you learned that data structures (like vectors, lists, etc) are used to store and organize data.
Algorithms are used to solve problems by sorting, searching, and manipulating data structures.

The <algorithm> library provides many useful functions to perform these tasks with iterators.
To use these functions, you must include the <algorithm> header file:
*/
#include <iostream>
// #include "Header_files.h"//😎Yes, We can import / include custom header files in cpp.

#include <bits/stdc++.h> //This header files includes almost everything in single line.
// But it is slower to compile and includes a lot of unnecessary stuff.
using namespace std;

int main()
{
    vector<int> serialNumber = {5, 679, 9, 9, 7, 65, 4, 3, 3, 2, 5, 6, 7, 8, 999};
    //(1). 👉🏻 .sort() //For sorting
    sort(serialNumber.begin(), serialNumber.end());

    for (auto iterator = serialNumber.begin(); iterator != serialNumber.end(); ++iterator)
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

    //(2). 👉🏻 .find(startIterator, endIterator, valueToFind) to find someting, takes 3 parameters;
    //          It works on sorted data.
    auto it = find(serialNumber.begin(), serialNumber.end(), 3);

  // Check if the number 3 was found
  if (it != serialNumber.end()) {
    //Memory wise Iterator looks like :begin() → 1 ,  2 ,  3 ,  end();
    //So if '3' is found, Iterator points to '3', Otherwise it points to end();
    //Therefore if 'it!=end, means '3' exists in vector. 
    cout << "The number 3 was found!" << "\n";
  } else {
    cout << "The number 3 was not found." << "\n";
  }
  
    return 0;
}