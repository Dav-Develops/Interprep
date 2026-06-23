#include <iostream>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
        long long num = n;
        int count = 0;
        cout<<num%4;

        while (num != 1) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                if (num == 3 || (num & 3) == 1) { 
                    //------------OR-----------------
                // if (num == 3 || (num % 4) == 1) { 
                    num -= 1;
                } else {
                    num += 1;
                }
            }
            count++;
        }

        return count;
    }
};
int main()
{
    Solution s1;
    int answer = s1.integerReplacement(65535);
    cout << "\n\nAnswer: " << answer;
    return 0;
}