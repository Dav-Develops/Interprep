// Write a Program to Find the Smallest and Largest Element in an Array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9, 8, 4, 5, 7, 3, 2, 5, 7, 9, 700, 589, 9090};
    int min=arr[0] ,max=arr[0];
    for (int i : arr)
    {
        if (i < min)
        {
            min = i;
        }
        if (i > max)
        {
            max = i;
        }
    }
    cout<<"min: "<<min<<", max: "<<max<<endl;
    return 0;
}