#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    cout<< "Process(";

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[mid] == key)
        {
            cout << " ) ";
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = arr[mid + 1];
            mid = (start + end) / 2;
            cout << " moving higher "; // Rough work 😊l
        }
        else if (arr[mid] > key)
        {
            end = arr[mid - 1];
            mid = (start + end) / 2;
            cout << " moving lower "; // Rough work 😊l
        }
    }
    return -1;
}
int main()
{
    int arrEven[] = {1, 2, 3, 4, 5, 6, 7,8};
    int arrOdd[] = {1, 2, 3, 4, 5, 6, 7, 8,9};
    int sizeEven = sizeof(arrEven) / sizeof(arrEven[0]);
    int sizeOdd = sizeof(arrOdd) / sizeof(arrOdd[0]);
    int keyEven = 4;
    cout<<"Case Even: "<<endl;
    cout << keyEven << " is at index: "<< binarySearch(arrEven, sizeEven, keyEven);

    cout<<"\n Case Odd: \n";
    int keyOdd = 7;
    cout << keyOdd << " is at index: "<< binarySearch(arrEven, sizeEven, keyOdd);
    return 0;
}