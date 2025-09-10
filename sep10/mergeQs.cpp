// Merge only even elements

#include <iostream>
using namespace std;

bool isEven(int num)
{
  return (num % 2 == 0) ? true : false;
}

int i = 0, j = 0, k = 0;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{

  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      if (isEven(arr1[i]))
        arr3[k++] = arr1[i++];
      else i++;
    }
    else 
    {
      if (isEven(arr2[j]))
        arr3[k++] = arr2[j++];
      else j++;
    }
  }
  while (i < size1)
  {
    if (isEven(arr1[i]))
      arr3[k++] = arr1[i++];
    else i++;
  }
  while (j < size2)
  {
    if (isEven(arr2[j]))
      arr3[k++] = arr2[j++];
    else j++;
  }
}

int main()
{
  int A[4] = {1, 2, 4, 5};
  int B[5] = {3, 7, 9, 10, 12};
  int result[7];
  mergeArrays(A, 4, B, 5, result);
  for (int i = 0; i < k; i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}