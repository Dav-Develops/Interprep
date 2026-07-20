#include<iostream>
using namespace std;

class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        int left=0, maxLength=0, n=s.length();
        bool seen[256] = {false};

        for(int right=0; right<n; right++){
            unsigned char c= s[right];
            while(seen[c]){
                seen[(unsigned)s[left]]=false;
                left++;
            }
            seen[c]=true;
            maxLength = max(maxLength, (right+1-left));
        }
        return maxLength;
    }
};

int main(){
    Solution s1;
    string str = "Thisisastring.";
    cout<<s1.lengthOfLongestSubstring(str);
    // string s = "This is a string";
    // unsigned char c = s[0];
    // cout<<c;
    return 0;
}