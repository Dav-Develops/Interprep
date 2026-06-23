#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for(char c: s){
            freq[c]++; //stroring characters if they are not in the,
            //as well as increasing their frquency by 1;
        }
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]]==1) return i; //checking if the ith character of string 's' has the freq == 1;
        }
        return -1;
    }
};
int main(){
    Solution s;
    string str = "this is a string.";
    cout<<s.firstUniqChar(str);
    return 0;
}