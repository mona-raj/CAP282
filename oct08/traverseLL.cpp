#include <iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

void traverse(Node *temp)
{
  while(temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
}

int main()
{
  Node *n1 = new Node(10);
  Node *n2 = new Node(20);
  Node *n3 = new Node(30);
  Node *n4 = new Node(40);

  n1->next = n2;
  n2->next = n3;
  n3->next = n4;

  Node *head = n1;

  traverse(head);

  return 0;
}