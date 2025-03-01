#include <iostream>
#include <algorithm>

using namespace std;

int findPairs(int nums[], int n, int k) {
    if (k < 0) return 0; 

    sort(nums, nums + n); 
    int i = 0, j = 1, count = 0;

    while (j < n) { 
        if (i == j || nums[j] - nums[i] < k) {
            j++; 
        } 
        else if (nums[j] - nums[i] > k) {
            i++; 
        } 
        else { 
            count++;
            i++; j++; 
            
           
            while (j < n && nums[j] == nums[j - 1]) j++;
        }
    }

    return count;
}

int main() {
    int nums[] = {3, 1, 4, 1, 5}; 
    int k = 2; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    
    cout << "Number of unique k-diff pairs: " << findPairs(nums, n, k) << endl;
    return 0;
}
