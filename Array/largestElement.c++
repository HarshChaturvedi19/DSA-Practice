#include <iostream>

using namespace std;

int findLargest(int arr[], int size) {
    int maxElement = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i]; 
        }
    }

    return maxElement;
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

    int largest = findLargest(arr, n);
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
