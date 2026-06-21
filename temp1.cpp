#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    int digitFrequencyScore(int n){
        int score =0;
        while(n>0){
            score += n%10;
            n/=10;
        }
        return score;
    }
};
//--------------------OR-------------------
// class Solution
// {
//     public:
//     int digitFrequencyScore(int n)
//     {
//         int digitSum = 0;
//         vector<int> allDigits;
//         if (n == 0)
//         {
//             allDigits.push_back(0);
//         }
//         while (n > 0)
//         {
//             allDigits.push_back(n % 10);
//             n /= 10;
//         }

//         sort(allDigits.begin(), allDigits.end());

//         for (auto it = allDigits.begin(); it != allDigits.end(); ++it)
//         {
//             digitSum += *it;
//         }
//         return digitSum;
//     }
// };
int main()
{
    Solution s1;
    cout<<s1.digitFrequencyScore(11111);
    return 0;
}