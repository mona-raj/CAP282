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
  while (temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
  cout << endl;
}

void insertAtBeginning(Node *&head, int value)
{
  Node *newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

void insertAtEnd(Node *head, int value)
{
  if (head == NULL)
  {
    insertAtBeginning(head, value);
    return;
  }
  Node *newNode = new Node(value);
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertInMiddle(Node *&head, int pos, int value)
{
  if (pos == 1)
  {
    insertAtBeginning(head, value);
    return;
  }
  Node *newNode = new Node(value);
  Node *temp = head;
  int count = 1;
  while (count < (pos - 1))
  {
    cout << "count = " << count << endl;
    temp = temp->next;
    count++;
  }
  newNode->next = temp->next;
  temp->next = newNode;
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

  insertInMiddle(head, 1, 50);

  cout << "After insertion: " << endl;
  traverse(head);

  return 0;
}