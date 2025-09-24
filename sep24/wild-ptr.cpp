#include <iostream>
using namespace std;

int main()
{
  // Bad use of pointer -> wild pointer
  // int *ptr;
  // *ptr = 10;
  // cout << ptr << endl;
  // cout << *ptr << endl;


  // How to overcome??
  // Method 1. Null pointer

  // int *ptr = nullptr;
  // cout << ptr << endl;

  // Method 2. static memory allocation

  // int a;
  // int *ptr = &a;
  // *ptr = 10;
  // cout << ptr << endl;
  // cout << *ptr << endl;

  // Method 3. Dynamic memory allocation

  // int *ptr;
  // // 1 way => 
  // // ptr = (int*) new int;
  // // 2 way => 
  // ptr = new int;
  // *ptr = 10;
  // cout << ptr << endl;
  // cout << *ptr << endl;


  return 0;
}