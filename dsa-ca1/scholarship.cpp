// 1. You are given an array of student scores,
//   where a score of 90 or above will get a scholarship.
//   Write a program to find out how many students have got scholarship.

#include <iostream>
using namespace std;

int main()
{
  int scores[5];
  int noOfScholarships = 0;

  // getting scores
  cout << "Enter scores of 5 students: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> scores[i];
  }

  // traversing through array and finding out how many students have scholarship
  for (int i = 0; i < 5; i++)
  {
    if (scores[i] >= 90)
    {
      noOfScholarships++;
    }
  }

  // displaying number of students with scholarship
  cout << "Number of students with scholarship are " << noOfScholarships << endl;

  return 0;
}