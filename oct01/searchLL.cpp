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

int search(Node *ptr, int key)
{
  int position = 0;
  Node *temp = ptr;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return position + 1;
    }
    else
    {
      temp = temp->next;
      position++;
    }
  }
  return 0;
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

  // Searching
  int key;
  cout << "Enter element to be seached: ";
  cin >> key;
  int pos = search(head, key);
  if (pos == 0)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    cout << "Element found at position " << pos << endl;
  }
}