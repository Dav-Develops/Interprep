// Write a program for Decimal to binary conversion.
#include <iostream>
using namespace std;

int deciToBinary(int Decimal_Value)
{
    int OriginalDeci=Decimal_Value, Binary_Value[32]={0};
    int iterator = 0;
    if (Decimal_Value == 1)
    {
        return 1;
    }
    else
    {
        while (Decimal_Value > 0)
        {
            Binary_Value[iterator] = Decimal_Value % 2;
            Decimal_Value /= 2;
            iterator++;
        }
    }
    cout<<OriginalDeci<<" in Binary number system is : ";
    for(int j=iterator; j>=0; j--){
        cout<<Binary_Value[j];
    }
}
int main()
{
    int Decimal_Value;
    cout << "Enter a Decimal number: ";
    cin >> Decimal_Value;

    deciToBinary(Decimal_Value);
    return 0;
}