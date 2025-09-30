#include <iostream>
using namespace std;

class Node
{
public:
  Node *prev;
  int data;
  Node *next;
};

int main()
{
  // Step 1: creating individual nodes
  Node *n1 = new Node();
  Node *n2 = new Node();
  Node *n3 = new Node();

  // Step 2: assigning data values in nodes
  n1->data = 1;
  n2->data = 2;
  n3->data = 3;

  n1->prev = nullptr;
  n2->prev = nullptr;
  n3->prev = nullptr;
  n1->next = nullptr;
  n2->next = nullptr;
  n3->next = nullptr;

  // Step 3: linking the different nodes with help of pointers
  n1->next = n2;
  n2->next = n3;
  n2->prev = n1;
  n3->prev = n2;

  // Accessing
  Node *head = n1;
  Node *tail = n3;

  cout << head->data << " " << tail->data << endl;
}