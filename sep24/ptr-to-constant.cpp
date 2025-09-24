#include <iostream>
using namespace std;

int main()
{
  const float pi = 3.14;
  const float *ptr = &pi;

  cout << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl;
  
  float num = 6.8;

  ptr = &num; // this is allowed

  cout << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl;

  // *ptr = 9.8; // error: assignment of read-only location '* ptr'

  return 0;
}