#include <iostream>
using namespace std;

int main()
{
    //validate a numerical input:
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number))
    //'cin>> variable' automatically compares the input to the variable's type. If they don't match, 'false' is returned.
    { // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear();             // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }
    cout << "You entered: " << number<<"\n";

    // --------------------Or validate number in a specific range---------------------------------

    int num;
    do
    {
        cout << "Choose a number between 1 and 5: ";
        cin >> num;
        cin.clear();
        cin.ignore(10000, '\n'); // Remove bad input
    } while (!(num >= 1 && num <= 5));
    cout << "\nYou chose: " << num<<"\n";
    
    //-----------------------Validate string input-----------------------

    string str;
    
    do{
        cout<<"Enter a string: ";
        cin>>str;
        cin.clear();
        cin.ignore(10000, '\n'); 
    }while(str.empty());
    cout<<"You entered: " << str;
    return 0;
}