#include <iostream>
using namespace std;


bool searchElement(int arr[], int n, int k) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k) {
            return true; 
        } else if (arr[mid] < k) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return false; 
}

int main() {
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> k;

    if (searchElement(arr, n, k)) {
        cout << "True (Element found)\n";
    } else {
        cout << "False (Element not found)\n";
    }

    return 0;
}
