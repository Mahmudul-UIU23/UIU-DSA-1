#include <bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low >= high){
        return;
    } 

    int PI= arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= PI)
        {
            i++;
        } 
        while (j > low && arr[j] > PI){
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);

    quicksort(arr, low, j - 1);
    quicksort(arr, j + 1, high);
}

int binary_search(int arr[], int start, int end, int x) {
    if (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        else if((x < arr[mid])) {
            return binary_search(arr, start, mid - 1, x);
        }       
        else {
            return binary_search(arr, mid + 1, end, x);
        }
    }
    return -1; 
}

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int x;
    cin >> x;
    quicksort(A, 0, n - 1);
    int index = binary_search(A, 0, n - 1, x);
    if (index == -1)
        cout << x << " not found\n";
    else
        cout << x << " found in index " << index << "\n";
    return 0;
}
