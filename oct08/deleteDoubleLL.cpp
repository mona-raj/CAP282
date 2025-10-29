#include <iostream>
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
  while (temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
  cout << endl;
}

void backwardTraverse()
{
  Node *temp = tail;
  while (temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->prev;
  }
  cout << endl;
}

void deleteAtHead()
{
  if (head == NULL)
  {
    return;
  }
  Node *curr = head;
  head->next->prev = NULL;
  head = head->next;
  delete curr;
}

void deleteAtTail()
{
  if (tail == NULL)
  {
    return;
  }
  Node *curr = tail;
  tail->prev->next = NULL;
  delete curr;
}

void deleteInMiddle(int pos)
{
  if (head == NULL)
  {
    return;
  }
  if (pos == 1)
  {
    deleteAtHead();
    return;
  }
  int count = 1;
  Node *temp = head;
  while (count < (pos - 1))
  {
    temp = temp->next;
    count++;
  }
  Node *curr = temp;
  curr->prev->next = curr->next;
  curr->next->prev = curr->prev;
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
  n4->prev = n3;
  n3->prev = n2;
  n2->prev = n1;

  head = n1;
  tail = n4;

  cout << "Original Linked List: " << endl;
  forwardTraverse();

  // deleteAtHead();
  // cout << "After deletion at head: " << endl;
  // forwardTraverse();

  // deleteAtTail();
  // cout << "After deletion at tail: " << endl;
  // forwardTraverse();

  deleteInMiddle(2);
  cout << "After deletion in middle: " << endl;
  forwardTraverse();

  return 0;
}