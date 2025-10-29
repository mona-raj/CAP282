// In linked list -> push and pop operations are always at top
// In arrays -> push and pop operations are always at bottom/end

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

Node *top = NULL;

void push(int value)
{
  Node *newNode = new Node(value);
  newNode->next = top;
  top = newNode;
}

bool isEmpty()
{
  if (top == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void pop()
{
  if (isEmpty())
  {
    cout << "Stack underflow" << endl;
    return;
  }
  else
  {
    Node *temp = top;
    cout << "Popped element is " << temp->data << endl;
    top = top->next;
    delete temp;
  }
}

void display()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    Node *temp = top;
    cout << "Stack elements are: ";
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
}

void peek()
{
  if (isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Peek element is " << top->data << endl;
  }
}

int main()
{
  display();

  push(10);
  push(20);
  push(30);
  push(40);

  display();

  pop();
  pop();

  display();

  peek();

  pop();
  pop();
  pop();

  peek();

  return 0;
}