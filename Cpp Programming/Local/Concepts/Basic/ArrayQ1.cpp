// create a program that finds the lowest age among different ages:
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int LowestAge = numeric_limits<int>::max();

    for (int age : ages)
    {
        if (LowestAge > age)
        {
            LowestAge = age;
        }
    }
    cout << "LowestAge is:\t" << LowestAge;
    return 0;
}