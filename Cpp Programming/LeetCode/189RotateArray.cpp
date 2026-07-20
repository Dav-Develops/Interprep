#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k%= nums.size(); //smallerNumber % LargerNumber = smallerNumber;
                         //LargerNumber % smallerNumer = calculatedRemainder
        cout<<k;
            reverse(nums.begin(), nums.end());       // reverse all elements.
            reverse(nums.begin(), nums.begin() + k); // reverse first k (as it is reversed, last k) elements.
            reverse(nums.begin() + k, nums.end());   // reverse elements from k to end.
    }
};
int main()
{
    Solution s;
    // vector<int> vect = {1,4,7,8,4,3,2,90,0};
    vector<int> vect = {1,2,3,4,5,6,7};
    // vector<int> vect = {1, 2};
    s.rotate(vect, 3);
    for (int i : vect)
    {
        cout << i << " ";
    }
    return 0;
}