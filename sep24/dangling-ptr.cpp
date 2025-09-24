#include <iostream>
using namespace std;

int main()
{
  int *ptr = new int;
  *ptr = 10;

  cout << "Before deletion: " << endl
       << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl;

  delete ptr;

  cout << "After deletion: " << endl
       << "ptr : " << ptr << endl
       << "*ptr : " << *ptr << endl; // garbage value

  return 0;
}