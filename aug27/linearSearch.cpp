#include<iostream>
using namespace std;

// int linearSearch(int arr[], int length, int key)
// {
//   for (int i = 0; i < length ; i++)
//   {
//     if (arr[i] == key)
//       return i;
//   }
//   return -1;
// }

bool linearSearchIn2DArray(int arr2D[][3], int x, int y, int key)
{
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      if (arr2D[i][j] == key)
      {
        cout << "Element found at index [" << i << "][" << j << "]" << endl;
        return true;
      }
    }
  }
  return false;
}

int main()
{
  // int arr[10] = {12, 459, 6, 34, 90, 2, 67, 21, 3, 32};
  // int key, l = 10;
  // cout << "enter element to be searched: ";
  // cin >> key;
  // int result = linearSearch(arr, l, key);
  // if (result == -1)
  //   cout << "Element not found in array" << endl;
  // else
  //   cout << "Element found at index " << result << endl;  


  int arr2D[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int x = 3, y = 3, key;
  cout << "Enter element to be searched: ";
  cin >> key;
  bool result = linearSearchIn2DArray(arr2D, x, y, key);
  if (!result)
    cout << "Element not found in array" << endl;
  else
    cout << "Element found" << endl;
  return 0;
}



// ===================================================

// 2d linear search using function (passing by reference): -


// #include <stdio.h>
//                                   int
//                                   linearSearch2D(int rows, int cols, int *arr, int key)
// {
//   for (int i = 0; i < rows; i++)
//   {
//     for (int j = 0; j < cols; j++)
//     {
//       if (*(arr + i * cols + j) == key)
//       {
//         printf("Element found at position (%d, %d)\n", i, j);
//         return 1;
//       }
//     }
//   }
//   return 0;
// }

// int main()
// {
//   int rows, cols, key;

//   printf("Enter the number of rows and columns: ");
//   scanf("%d %d", &rows, &cols);

//   int arr[rows][cols];
//   printf("Enter the elements of the 2D array:\n");
//   for (int i = 0; i < rows; i++)
//   {
//     for (int j = 0; j < cols; j++)
//     {
//       scanf("%d", &arr[i][j]);
//     }
//   }

//   printf("Enter the element to search: ");
//   scanf("%d", &key);

//   if (!linearSearch2D(rows, cols, (int *)arr, key))
//   {
//     printf("Element not found\n");
//   }

//   return 0;
// }
