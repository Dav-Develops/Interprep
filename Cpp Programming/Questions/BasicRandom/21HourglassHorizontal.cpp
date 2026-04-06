// Write a Program to Print the Rotated(Horizontal) Hourglass Pattern.

//----------------------------------Pending Yet------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            // cout << "-";
            cout << "*";
        }
        for (int k = num * 2 - i; k >= i; k--)
        {
            cout << "-";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
    for (int i = 1; i <= num; i++)
    {
        for (int j = num - 1; j >= i; j--)
        {
            cout << "*";
        }
        for (int k = 1; k < (i*2) ; k++)
        {
            cout << "-";
        }
        // for(int j=)
        cout << endl;
    }
    return 0;
}