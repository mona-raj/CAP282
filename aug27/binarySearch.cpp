// iterative method

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
  int low = 0;
  int high = arr.size() - 1;
  int mid;

  while (low <= high)
  {
    mid = (low + high) / 2;

    if (arr[mid] == key)
      return mid;

    else if (key > arr[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}

int main()
{
  vector<int> array = {2, 5, 7, 11, 16, 21, 36, 72, 101, 112};
  int key;
  cout << "Enter element to be searched: ";
  cin >> key;
  int result = binarySearch(array, key);
  if (result == -1)
    cout << "Element not found in array" << endl;
  else
    cout << "Element found at index " << result << endl;
  return 0;
}