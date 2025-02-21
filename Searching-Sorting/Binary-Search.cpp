#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int target)
{
    int start = 0;
    int end = n-1;

    int mid = (start + end)/2;

    while(start <= end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }

        else if(target > arr[mid])
        {
            start = mid +1;
        }

        else if( target < arr[mid])
        {
            end = mid -1;
        }

        mid = (start + end)/2;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 12, 13, 14};
    int n = sizeof(arr) / sizeof(arr[0]);;
    int target = 14;

    int ansIndex = binarySearch(arr, n, target);
    if (ansIndex == -1)
    {
        cout<<"Element Nahi Mila :"<<endl;
    }
    else{
        cout<<"Found at Index :->"<<ansIndex<<endl;
    }
    return 0;
}