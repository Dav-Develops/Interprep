#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

int varify_BracketOrder(string str)
{
    int str1Len = str.length() - 1;
    for (int i = 0; i <= str1Len; i++)
    {
        if (str[i] == str[str1Len - i])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    // input data
    string str1;
    cout << "Enter Brackets, only '(',')', '{','}', '[', and ']': ";
    getline(cin, str1);

    cout << "Data aquired: " << str1 << endl;

    verify_BracketOrder(str1);
    // required variables:
    // int roundbl = 0, roundbr = 0;
    // int curlybl = 0, curlybr = 0;
    // int squarebl = 0, squarebr = 0;
    // vector<int> track_Vars = {roundbl, roundbr, curlybl, curlybr, squarebl, squarebr};

    // map<int, int> compare_brackets = {
    //     {'(', ')'},
    //     {'{', '}'},
    //     {'[', ']'}};
    // stack<char> stLeft_brackets;
    // stack<char> stRight_brackets;
    // // for (int i = 0; i < str1.length(); i += 2)
    // // {
    // //     stLeft_brackets.push(str1[i]);
    // // }
    // for (int i = 0; i < str1.length(); i++)
    // {
    //     switch (str1[i])
    //     {
    //     case '(':
    //         track_Vars[0]++;
    //         break;

    //     case ')':
    //         track_Vars[1]++;
    //         break;

    //     case '{':
    //         track_Vars[2]++;
    //         break;

    //     case '}':
    //         track_Vars[3]++;
    //         break;

    //     case '[':
    //         track_Vars[4]++;
    //         break;

    //     case ']':
    //         track_Vars[5]++;
    //         break;
    //     }
    // }
    // // cout<<stack1.top();
    // // cout<<track_Vars.size();
    // for (int i = 0; i < track_Vars.size(); i++)
    // {
    //     cout << track_Vars[i];
    // }

    return 0;
}