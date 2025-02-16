
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    int temp[k];

    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of rotations: ";
    cin >> k;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    rotateArray(arr, n, k);

    cout << "\nRotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
