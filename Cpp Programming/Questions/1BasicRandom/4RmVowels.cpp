// Write a Program to Remove the Vowels from a String.
#include <iostream>
#include <cstring>
using namespace std;

string rmVowels(string str)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    //Instead of Bombardment 😄 of Equality check operators with if/if-else statements, we packed all vowels
    //in an array, and comparing each array element with string's current element.
    for (int i = 0; i < str.length(); i++)
    {
        for (char j : vowels)
        {
            if (str[i] == j)
            {
                str.erase(i, 1);
                i--; // Adjust index after removal;
            }
        }
    }
    return str;
}
int main()
{
    string str1 = "This is a string.";
    str1 = rmVowels(str1);
    cout << str1 << endl;
    return 0;
}