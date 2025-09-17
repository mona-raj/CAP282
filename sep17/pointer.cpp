// display value stored in a variable and its memory address using pointers

// #include<iostream>
// using namespace std;

// int main()
// {
//   int a = 15;
//   int *ptr = &a;
//   cout << "Value of a: " << *ptr << endl;
//   cout << "Memory address of a: " << ptr << endl;
//   return 0;
// }

// modify a variable using pointers

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a = 15;
//   int *ptr = &a;
//   cout << "Value of a: " << *ptr << endl;
//   cout << "Memory address of a: " << ptr << endl;
//   (*ptr)++;
//   cout << "Modified value of a: " << *ptr << endl;
//   return 0;
// }

// two pointers for different data types

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 15;
//   char c = 'A';
//   float f = 8.9;
//   void *ptr = &i;
//   // cannot dereference a void pointer directly
//   cout << "Value of integer: " << *(int *)ptr << endl;
//   cout << "Memory address of integer: " << ptr << endl;
//   ptr = &c;
//   cout << "Value of character: " << *(char *)ptr << endl;
//   cout << "Memory address of character: " << ptr << endl;
//   ptr = &f;
//   cout << "Value of float: " << *(float *)ptr << endl;
//   cout << "Memory address of float: " << ptr << endl;

//   return 0;
// }

// Null pointer

// #include<iostream>
// using namespace std;

// int main()
// {
//   int a = 7;
//   int *ptr = nullptr;
//   ptr = &a;

//   if (ptr == nullptr)
//     cout << "Memory address not allocated to pointer" << endl;
//   else
//     cout << "Memory address allocated to pointer" << endl;

//   return 0;
// }

