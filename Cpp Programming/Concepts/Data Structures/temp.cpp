#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // vector<int> serialNumber = {5, 679, 9, 9, 7, 65, 4, 3, 3, 2, 5, 6, 7, 8, 999};
    vector<int> serialNumber = {1,2,3,4,};
    //(1). 👉🏻 .sort() //For sorting

  // Search for the number 3
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
