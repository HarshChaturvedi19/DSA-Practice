#include <iostream>
using namespace std;

class Solution {
    public:
        string removeDuplicates(string s) {
            string ans = "";
            int index = 0;
            while (index < s.length()) {
                if (ans.length() > 0 && ans[ans.length() - 1] == s[index]) {
                    ans.pop_back();
                } else {
                    ans.push_back(s[index]);
                }
                index++;
            }
            return ans;
        }
};

int main() {
    Solution sol;
    string input;
    
    cout << "Enter a string: ";
    cin >> input;
    
    string result = sol.removeDuplicates(input);
    cout << "Output after removing duplicates: " << result << endl;
    
    return 0;
}
