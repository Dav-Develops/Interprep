// Write a Program to Find the Nth Term of the Fibonacci Series.

#include <iostream>
using namespace std;

int fib(int n_th_term)
{
    int n1 = 0, n2 = 1, ans = 0;

    for (int i = 1; i <= n_th_term; i++)
    {
        // cout<<"n1: "<<n1<<" n2: "<<n2<<" ans: "<<ans<<"\n";
        if (i >= 3)
        {
            ans = n1 + n2;
            n1 = n2;
            n2 = ans;
        }

        if (i == 1)
        {
            ans = 0;
        }
        if (i == 2)
        {
            ans = 1;
        }
    }
    return ans;
}
int main()
{
    cout << "\n"
         << fib(7);
    return 0;
}