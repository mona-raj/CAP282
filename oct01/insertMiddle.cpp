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

void traverse(Node *ptr)
{
  Node *temp = ptr;
  while (temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
}

void insertBetween(Node *&ptr1, Node *&ptr2, int key) // pass by reference
{
  Node *newNode = new Node(key);
  newNode->next = ptr2;
  ptr1->next = newNode;
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

  cout << "Before insertion: " << endl;
  traverse(head);

  int key;
  cout << "Enter element to be inserted at 3rd position: ";
  cin >> key;

  insertBetween(n2, n3, key);

  cout << "After insertion: " << endl;
  traverse(head);
}