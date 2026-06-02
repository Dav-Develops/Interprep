#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "Enter the sign of operation to be performed: (+, -, /, *): ";
    cin >> op;
    double a, b, res = 0;
    cout << "\nEnter Two numbers: ";
    cin >> a>>b;

    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        (a > b) ? (res = a - b) : (res = b - a);
        break;
    case '/':
        if ((b != 0))
        {
            res = a / b;
        }
        else
        {
            cout << "\nInvalide input! The divisor can't be 0.";
        }
        break;
    case '*':
        res = a * b;
        break;
    default:
        cout << "Invalid Operator.";
        break;
    }
    cout << res;
    return 0;
}