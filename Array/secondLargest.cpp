#include <iostream>

using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) return -1; 

    int largest = arr[0];   
    int secondLargest = -1; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {  
            secondLargest = largest;
            largest = arr[i];        
        } else if (arr[i] > secondLargest && arr[i] != largest) { 
            secondLargest = arr[i];  
        }
    }

    return secondLargest;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr, n);

    if (result == -1)
        cout << "No second largest element exists." << endl;
    else
        cout << "The second largest element is: " << result << endl;

    return 0;
}
