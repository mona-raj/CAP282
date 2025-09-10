#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
  int i = 0, j = 0, k = 0;

  while (i <= size1 && j <= size2)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k++] = arr1[i++];
    } 
    else 
    {
      arr3[k++] = arr2[j++];
    }
  }
  while (i < size1)
  {
    arr3[k++] = arr1[i++];
  }
  while (j < size2)
  {
    arr3[k++] = arr2[j++];
  }
}

int main()
{
  int A[4] = {1, 4, 7, 9};
  int B[3] = {3, 8, 11};
  int result[7];
  mergeArrays(A, 4, B, 3, result);  
  for (int i = 0; i < 7; i++)
  {
    cout << result[i] << " ";
  }
  
  return 0;
}