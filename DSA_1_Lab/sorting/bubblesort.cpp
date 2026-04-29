#include <iostream>
#define nl endl;
using namespace std;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {-2, 45, 0, 11, -9};
    int n = sizeof(arr) / sizeof(arr[0]); // length
    // cout<<sizeof(arr)<<endl;

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}