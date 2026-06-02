// Write a Program to Print the Rotated(Horizontal) Hourglass Pattern.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cout << "-";
            cout << "*";
        }
        for (int k = (num*2) -i; k >= i; k--)
        {
            // cout << "-";
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= num; i++)
    {
        for (int j = num ; j >= i; j--)
        {
            cout << "*";
        }
        for (int k = 1; k <= (i*2)-1 ; k++)
        {
            // cout << "-";
            cout << " ";
        }
        for(int j= 1; j<(num-i)+2; j++){
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}