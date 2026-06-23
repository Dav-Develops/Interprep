#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i+=2){
            if(i<=nums.size()) arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);
        }
        return arr;
    }
};
int main(){
    Solution s;
    vector<int> aw = {4,11,65,3,5,68,43,5,9,10};
    vector<int> res = s.numberGame(aw);
    for(auto i: res){
        cout<<i<<" ";
    }
    return 0;
}