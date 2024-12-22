#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
    }
};

int main() {
    int size, target;

    // Taking input for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);

    // Taking input for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    // Taking input for the target value
    cout << "Enter the target value: ";
    cin >> target;

    // Creating an object of Solution and calling the twoSum method
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
