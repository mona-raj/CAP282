#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *prev;
  Node *next;
  Node(int value)
  {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

Node *head = NULL;
Node *tail = NULL;

void forwardTraverse()
{
  Node *temp = head;
  while(temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
  cout << endl;
}

void backwardTraverse()
{
  Node *temp = tail;
  while(temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->prev;
  }
  cout << endl;
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
  n4->prev = n3;
  n3->prev = n2;
  n2->prev = n1;

  head = n1;
  tail = n4;

  cout << "Forwards traversal: " << endl;
  forwardTraverse();

  cout << "Backwards traversal: " << endl;
  backwardTraverse();

  return 0;
}