// deleting first element of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};

//   cout << "Array before deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   // deleting element
// since we are shifting elemnets to their left, 
// the last element has laready been shifted when we were on i = n - 1
// so we do not need to run the loop n times
//   for (int i = 0; i < (noOfElements - 1); i++)
//   {
//     arr[i] = arr[i + 1];
//   }
//   noOfElements = noOfElements - 1;

//   cout << "Array after deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// deleting a middle element of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};
//   int location;

//   cout << "Array before deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   cout << "Enter index of element to be deleted: ";
//   cin >> location;

//   // deleting element
//   for (int i = location; i < (noOfElements - 1); i++)
//   {
//     arr[i] = arr[i + 1];
//   }
//   noOfElements = noOfElements - 1;

//   cout << "Array after deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// deleting last element of array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[10] = {1, 2, 3, 4, 5};

//   cout << "Array before deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }
//   cout << endl;

//   // deleting element
//   noOfElements = noOfElements - 1;

//   cout << "Array after deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }

// generalised approach

// #include <iostream>
// using namespace std;

// int main()
// {
//   int noOfElements = 5;
//   int arr[5];
//   int location;

//   cout << "Enter 5 integers: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cin >> arr[i];
//   }
//   cout << endl;

//   do
//   {
//     cout << "Enter the location of element to be deleted: ";
//     cin >> location;
//     if (location <= 0 || location > noOfElements)
//     {
//       cout << "Enter a number between 1 and 5" << endl;
//     }
//   } while (location <= 0 || location > noOfElements);

//   // deleting element
//   for (int i = (location - 1); i < (noOfElements - 1); i++)
//   {
//     arr[i] = arr[i + 1];
//   }
//   noOfElements = noOfElements - 1;

//   cout << "Array after deletion: " << endl;
//   for (int i = 0; i < noOfElements; i++)
//   {
//     cout << arr[i] << "\t";
//   }

//   return 0;
// }
