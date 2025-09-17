// wild pointer

// #include <iostream>
// using namespace std;

// int main()
// {
//   int *ptr;
//   *ptr = 9;
//   cout << *ptr; // Segmentation fault
//   return 0;
// }

// How to resolve ??
// Method 1: declare a variable and assign it to pointer

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a = 9;
//   int *ptr;
//   ptr = &a;
//   cout << *ptr; // 9
//   return 0;
// }

// Method 2: dynamic allocation

// #include <iostream>
// using namespace std;

// int main()
// {
//   int *ptr = (int *)new int;
//   *ptr = 9;
//   cout << ptr << endl;
//   cout << *ptr << endl; // 9
//   return 0;
// }

// 3 diffrences between nullptr & wild ptr
//    nullptr                           Wild ptr
// =========================================================
// 1. intentional                       unintentional
// 2. safe                              unsafe
// 3. checks whether free memory
//    is there & that memory is
//    allocated successfully or not     gives misleading result