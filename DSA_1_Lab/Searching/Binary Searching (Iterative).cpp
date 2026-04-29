#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;
    else if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int n,key;
    cout << "Enter value of n: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "Enter key: ";
    cin >> key;

  int result = binarySearch(a, key, 0, n - 1);
  if (result == -1)
    cout << "Not found";
  else
    cout << "Item found at " << result;
}
