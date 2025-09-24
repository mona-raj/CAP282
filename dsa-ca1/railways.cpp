// 3. A railway system stores train numbers in an array.
//   One train is cancelled. Write a program to delete its number
//   from the given position in the array.

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int trainNumbers[5];
  int size = 5;
  int position;

  // getting train numbers as input from user
  cout << "Enter 5 train numbers: ";
  for (int i = 0; i < size; i++)
  {
    cin >> trainNumbers[i];
  }

  // getting train to be cancelled as input
  do
  {
    cout << "Enter position of train to be cancelled: ";
    cin >> position;

    if (position < 1 || position > size)
    {
      cout << "Wrong input" << endl
           << "Enter a number between 1 and " << size << endl;
    }

  } while (position < 1 || position > size);

  cout << "Before cancellation" << endl;
  printArray(trainNumbers, size);

  // deleting train number at given position
  for (int i = (position - 1); i < size; i++)
  {
    trainNumbers[i] = trainNumbers[i + 1];
  }

  // modifying size of array
  size = size - 1;

  cout << "After cancellation" << endl;
  printArray(trainNumbers, size);

  return 0;
}