// declare 2D array, initialise it and display

// #include<iostream>
// using namespace std;

// int main()
// {
//   int A[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//   };

//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       cout << A[i][j] << "\t";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// declare 2D array, get values from user and display

// #include<iostream>
// using namespace std;

// int main()
// {
//   int A[3][3];

//   cout << "Enter 6 integers: " << endl;
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       cin >> A[i][j];
//     }
//   }

//   cout << "The 2D array is: " << endl;
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       cout << A[i][j] << "\t";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// declare 2 matrices, get their values and display them

// #include<iostream>
// using namespace std;

// int main()
// {
//   int A[2][2], B[2][2];

//   cout << "Enter 4 integers for matrix A: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cin >> A[i][j];
//     }
//   }

//   cout << endl << "Enter 4 integers for matrix B: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cin >> B[i][j];
//     }
//   }

//   cout << endl << "Matrix A: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cout << A[i][j] << "\t";
//     }
//     cout << endl;
//   }

//   cout << endl << "Matrix B: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cout << B[i][j] << "\t";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// declare 3 matrices, store the sum of first 2 in 3rd and display it

// #include<iostream>
// using namespace std;

// int main()
// {
//   int A[2][2], B[2][2], sum[2][2];

//   cout << "Enter 4 integers for matrix A: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cin >> A[i][j];
//     }
//   }

//   cout << endl << "Enter 4 integers for matrix B: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cin >> B[i][j];
//     }
//   }

//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       sum[i][j] = A[i][j] + B[i][j];
//     }
//   }

//   cout << endl << "Sum of A and B: " << endl;
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       cout << sum[i][j] << "\t";
//     }
//     cout << endl;
//   }

//   return 0;
// }