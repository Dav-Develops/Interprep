// 5. Write a Program to Check Whether a Character is a Vowel or Consonant.
#include <iostream>
#include<cctype>
using namespace std;

string checkAlpha(char ch)
{

    string typeofCh;

    char alphabets[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (char vowel : alphabets)
    {
        if (ch == vowel)
        {
            return typeofCh = "Vowel";
        }
    }
    return typeofCh = "Consonant";
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (!(isalpha(ch)))
    {
        cout << ch << " is not an alphabet.\n";
    }
    else
    {
        cout << ch << " is a " << checkAlpha(ch) <<endl;
    }
    return 0;
}