#include <iostream>
using namespace std;
class Solution
{
public:
//--------------Hack version 😃😃--------------
int addDigits(int num){
    if(num==0)return num;
    if(num%9==0) return 9; //if completely divisible by 9 (means multiple of 9)
    return num%9; //for any other number;
}
//-------------OR---------------
    // int addDigits(int num)
    // {
    //     if (num == 0)
    //         return num;

    //     int sum = 0;
    //     while (num > 0)
    //     {

    //             sum += num % 10;
    //             num /= 10;
    //             if (num==0 && sum >= 10)
    //             {
    //                 return addDigits(sum);
    //             }
    //         }
    //         return sum;
    // }
};
int main()
{
    Solution s;
    cout << s.addDigits(38);
    return 0;
}