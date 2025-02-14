#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) { // Check dips
                count++;
            }
            if (count > 1) {
                return false; 
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    if (solution.check(nums)) {
        cout << "True (The array is a rotated sorted array)" << endl;
    } else {
        cout << "False (The array is NOT a rotated sorted array)" << endl;
    }

    return 0;
}
