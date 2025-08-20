// insert element at beginning of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};
//   int value;

//   cout << "Array before insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   cout << "Enter value to be inserted at beginning of array: ";
//   cin >> value;

//   for (int i = (noOfElements - 1); i >= 0; i--)
//   {
//     arr[i + 1] = arr[i];
//   }
//   arr [0] = value;
//   noOfElements = noOfElements + 1;

//   cout << "Array after insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// insert element in middle of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};
//   int value, location;

//   cout << "Array before insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   cout << "Enter value to be inserted in array: ";
//   cin >> value;
//   cout << "Enter index where element is to be inserted: ";
//   cin >> location;

//   for (int i = (noOfElements - 1); i >= location; i--)
//   {
//     arr[i + 1] = arr[i];
//   }
//   arr [location] = value;
//   noOfElements = noOfElements + 1;

//   cout << "Array after insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// insert element at end of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};
//   int value;

//   cout << "Array before insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   cout << "Enter value to be inserted in array: ";
//   cin >> value;

//   arr[noOfElements] = value;
//   noOfElements = noOfElements + 1;

//   cout << "Array after insertion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// generalised program

#include <iostream>
using namespace std;

int main()
{
  int noOfElements = 5;
  int arr[6];
  int value, location;

  cout << "Enetr 5 integers: " << endl;
  for (int i = 0; i < noOfElements; i++)
  {
    cin >> arr[i];
  }
  cout << endl;

  cout << "Enter value to be inserted in array: ";
  cin >> value;

  do
  {
    cout << "Enter location where element is to be inserted: ";
    cin >> location;
    if (location > (noOfElements + 1) || location <= 0)
    {
      cout << "Enter a value between 1 and 6" << endl;
    }
  } while (location > (noOfElements + 1) || location <= 0);

  for (int i = (noOfElements - 1); i >= (location - 1); i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[location - 1] = value;
  noOfElements = noOfElements + 1;

  cout << "Array after insertion: " << endl;
  for (int i = 0; i < noOfElements; i++)
  {
    cout << arr[i] << "\t";
  }

  return 0;
}