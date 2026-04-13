// Write a Program to Check if the Given String is Palindrome or not Using Recursion.
#include <iostream>
using namespace std;

int isPalindromeRec(string str, int s0, int size)
{
    // If string contains only one character:
    if (s0 == size)
    {
        return true;
    }
    // If first and last element are not equall:
    if (str[size] != str[s0])
    {
        return false;
    }
    // Iterating only upto half of the size of string, cause comparing both sides simultaneously.
    if (s0 <= size)
    {
        isPalindromeRec(str, s0 + 1, size - 1);
    }
    return true;
}

int ispalindrome(string str)
{
    int strSize = str.length() - 1;
    if(strSize==0){
        return true;
    }
    return isPalindromeRec(str, 0, strSize);
}

int main()
{
    string str = "Check if this string is palindrome or not, using recursion.";
    // string str1 = "1111";
    cout<<ispalindrome(str);
    return 0;
}
