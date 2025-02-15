#include <iostream>
using namespace std;

int missingNumber(int nums[], int n) {
    int expectedSum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    int nums[n];
    cout << "Enter " << n << " elements (in any order, missing one number): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing number: " << missingNumber(nums, n) << endl;
    return 0;
}
