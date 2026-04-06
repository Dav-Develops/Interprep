// Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers.
// LCM = (a * b) / greatestCommonDivisor, means gcd of(a, b)
#include <iostream>
using namespace std;

int gcd(int a1, int b1)
{
    int a = max(a1, b1);
    int b = min(a1, b1);

    if (b == 0)
    {
        return a;
    }
    return (gcd(b, a % b));
}

int lcm(int a, int b)
{
    int lcm = ((a * b) / gcd(a, b));
    return lcm;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // cout<<"GCDDDDD "<<gcd(a,b)<<endl;
    cout << "lccccm: " << lcm(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
    return 0;
}