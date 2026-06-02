//// C++ program to print
// Pascal’s Triangle
#include <iostream>
using namespace std;


void printPascal(int n)
{

    int arr[n][n];

    for (int line = 0; line < n; line++) {
        for(int j=n-1; j>line; j--){
            cout<<" ";
        }
        // Every line has number of integers
        // equal to line number
        for (int i = 0; i <= line; i++) {
            // First and last values in every row are 1
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1]
                               + arr[line - 1][i];
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 10;
    printPascal(n);
    return 0;
}