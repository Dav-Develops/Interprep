// For same logic, instead of defining two separate functions, we can use funcion overloading method (
// which is using the different-named or different-type parameters). This allows us to create two
// functions  with same logic As Well As same Name.
// Means: Multiple functions can have the same name as long as the number and/or type of parameters are different.

#include <iostream>
using namespace std;

int sumFunc(int a, int b)
{
    return a + b;
}

double sumFunc(double a, double b)
{
    return a + b;
}
// Function decleration:
int plusFunc(int x, int y);
int plusFunc(int x, int y, int z);

int main()
{

    int intSum = sumFunc(5, 5);
    double doubleSum = sumFunc(5.5, 10.8);
    cout << intSum << "\n"<< doubleSum;
    // -----------------Part 1 👆--------Part 2👇------------------
    int result1 = plusFunc(3, 7);
    int result2 = plusFunc(1, 2, 3);

    cout << "\n\nSum of 2 numbers: " << result1 << "\n";
    cout << "Sum of 3 numbers: " << result2;
    return 0;
}

// Function overloading by number of parameters:
int plusFunc(int x, int y)
{
    return x + y;
}

int plusFunc(int x, int y, int z)
{
    return x + y + z;
}
