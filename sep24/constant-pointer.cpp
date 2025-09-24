#include <iostream>
using namespace std;

int main()
{
  float pi = 3.14;
  float *const ptr = &pi;

  cout << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl;

  float num = 6.8;

  // ptr = &num; // error: assignment of read-only variable 'ptr'

  cout << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl;
  return 0;
}