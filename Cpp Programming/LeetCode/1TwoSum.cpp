#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<nums[i]<<" + "<<nums[j]<<": "<<nums[i]+nums[j]<<"\n";
                if ((i!=j) && (nums[i] + nums[j] == target))
                {
                    cout<<nums[i] << nums[j];
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){
    Solution s1;
    vector<int> arr = {3,2,4};
    s1.twoSum(arr, 6);
    return 0;
}
