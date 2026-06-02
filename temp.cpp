#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
Solution(){}
  vector<int> twoSum(vector<int> &nums, int target)
  {
    int size = nums.size();
    for (auto i = 0; i < size; i++)
    {
      for(int j=i+1; j< size; j++){
      if (target == nums[i] + nums[j])
        return {i,j};
      }
    }
  }
};
int main()
{
  Solution sol1;
  sol1.twoSum();

  return 0;
}