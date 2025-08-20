// calculate sum of all elements in array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   int sum = 0;

//   for (int i =0; i < 5; i++)
//   {
//     sum += arr[i];
//   }
//   cout << "Sum of all array elements is " << sum << endl;
//   return 0;
// }

// calculate avg of all elements in array

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   int sum = 0;
//   float avg = 0;

//   for (int i =0; i < 5; i++)
//   {
//     sum += arr[i];
//   }
//   cout << "Average of all array elements is " << sum / 5.0 << endl;
//   return 0;
// }

// use function to calculate average of all elements in array

// #include<iostream>
// using namespace std;

// float average(int arr[], int noOfElements) {
//   float sum = 0;
//   for (int i =0; i < noOfElements; i++)
//   {
//     sum += arr[i];
//   }
//   return sum / noOfElements;
// }

// int main()
// {
//   int n = 5;
//   int arr[5] = {19, 21, 3, 67, 5};
  
//   cout << "Average of all array elements is " << average(arr, n) << endl;
//   return 0;
// }

// 3 students -> 2 subjects marks

// #include<iostream>
// using namespace std;

// int main()
// {
//   int student_marks[3][2] = {
//     {78, 98},
//     {54, 74},
//     {82, 87}
//   };

//   cout << "The student marks are:" << endl;
//   for (int i = 0; i < 3; i++)
//   {
//     cout << "Marks of student " << i + 1 << " are: " << endl;
//     for (int j = 0; j < 2; j++)
//     {
//       cout << student_marks[i][j] << "\t"; 
//     }
//     cout << endl;
//   }

//   return 0;
// }