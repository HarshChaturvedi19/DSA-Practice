#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int index = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[index]);
            index++;
        }
    }
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
