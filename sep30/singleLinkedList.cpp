#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *ptr;
};

int main()
{
  // Step 1: creating individual nodes
  Node *n1 = new Node();
  Node *n2 = new Node();
  Node *n3 = new Node();
  Node *n4 = new Node();

  // Step 2: assigning data values in nodes
  n1->data = 1;
  n2->data = 2;
  n3->data = 3;
  n4->data = 4;

  n1->ptr = nullptr;
  n2->ptr = nullptr;
  n3->ptr = nullptr;
  n4->ptr = nullptr;

  // Step 3: linking the different nodes with help of pointers
  n1->ptr = n2;
  n2->ptr = n3;
  n3->ptr = n4;

  // Accessing 
  Node *head = n1;

  cout << head->data << endl;
}