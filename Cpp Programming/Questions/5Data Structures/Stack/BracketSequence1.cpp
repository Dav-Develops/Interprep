
// Question here:
// https://www.w3schools.com/practice/practice.php?problem=WEEKLY002&lang=cpp
/*
Instructions
Read a string of brackets from input.

The string contains only the characters (, ), [, and ].

Print Yes if the brackets are balanced, or No if not.

Input used in test:
([()])
*/

#include <iostream>
#include <stack>
using namespace std;

// Create stack, to store characters:
stack<char> stk;

bool verify_BracketSequence(string str)
{
    for (char ch : str)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            stk.push(ch);
        }
        else
        {
            // check is stack is empty or not, cause 'else executed and stack empty means first
            // bracket is closing bracket, hence the sequence is wrong.
            if (stk.empty())
            {
                return false;
            }

            char top = stk.top();
            stk.pop();
            // If the opening bracket stored in stack does not matches the same type closing one in
            // string, sequence is incorrect.
            if ((top == '(' && ch != ')') || (top == '{' && ch != '}') || (top == '[' && ch != ']'))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter brackets to evaluate if they are in sequence or not (use only '(',')','{','}','[', and']'): ";
    getline(cin, str);

    verify_BracketSequence(str) ? cout<<"Yes" : cout<<"No";

    return 0;
}