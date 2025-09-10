// Arrays -> binary search using recursive method

#include <iostream>
// #include <vector>

using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
  if (low <= high)
  {
    int mid = (high + low) / 2;

    if (arr[mid] == key)
    {
      return mid;
    }
    if (arr[mid] > key)
    {
      return binarySearch(arr, low, mid - 1, key);
    }
    return 
      binarySearch(arr, mid + 1, high, key);
  }
  return -1;
}

int main()
{
  int arr[10] = {2, 8, 12, 56, 98, 123, 200, 312, 321, 544};
  int key;
  // int high = (sizeof(arr) / sizeof(arr[0])) - 1;
  cout << "Enter the value to be searched: ";
  cin >> key;
  int result = binarySearch(arr, 0, 9, key);
  if (result == -1)
  {
    cout << "Element not found" << endl;
  }
  else {
    cout <<"Element found at index " << result << endl;
  }
  return 0;
}

