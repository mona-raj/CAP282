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

void deleteFromBegin(Node *&head)
{
  if (head == NULL)
  {
    return;
  }
  Node *curr = head;
  head = head->next;
  delete curr;
}

void deleteFromEnd(Node *&head)
{
  if (head == NULL)
  {
    return;
  }
  if (head->next == NULL)
  {
    deleteFromBegin(head);
    return;
  }
  Node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  Node *curr = temp->next;
  temp->next = NULL;
  delete curr;
}

void deleteInMiddle(Node *&head, int pos)
{
  if (head == NULL)
  {
    return;
  }
  if (head->next == NULL || pos == 1)
  {
    deleteFromBegin(head);
    return;
  }
  int count = 1;
  Node *temp = head;
  while (count < (pos - 1))
  {
    temp = temp->next;
    count ++;
  }
  Node *curr = temp->next;
  temp->next = temp->next->next;
  delete curr;
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

  cout << "Before deletion: " << endl;
  traverse(head);

  deleteInMiddle(head, 5);

  cout << "After deletion: " << endl;
  traverse(head);

  return 0;
}