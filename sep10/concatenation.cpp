// Unsorted Arrays -> concatenation

#include<iostream>
#include<array>
using namespace std;

int* concatenateArray(const int arr1[], int size1, const int arr2[], int size2)
{
  int size3 = size1 + size2;
  int* arr3 = new int[size3];

  for (int i = 0; i < size1; i++)
  {
    arr3[i] = arr1[i];
  }
  for (int j = 0; j < size2; j++)
  {
    arr3[size1 + j] = arr2[j];
  }
  
  return arr3;
}

int main()
{
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[3] = {16, 7, 8};

  int size1 = 5;
  int size2 = 3;
  int* arr3 = concatenateArray(arr1, size1, arr2, size2);

  for(int i = 0; i < size1 + size2; i++)
  {
    cout << arr3[i] << endl;
  }

  delete[] arr3;
  return 0;
}
