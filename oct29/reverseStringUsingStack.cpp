// Reverse a string using stack

#include <iostream>
using namespace std;

class Node
{
public:
  char data;
  Node *next;
  Node(char value)
  {
    data = value;
    next = NULL;
  }
};

Node *top = NULL;

void push(char value)
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

char pop()
{
  if (isEmpty())
  {
    cout << "Stack underflow" << endl;
    return ' ';
  }
  else
  {
    Node *temp = top;
    // cout << "Popped element is " << temp->data << endl;
    char ch = top->data;
    top = top->next;
    delete temp;
    return ch;
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

int main()
{
  string str = "APPLE";

  cout << "Original string = " << str << endl;
  
  for (char ch : str)
  {
    push(ch);
  }
  
  display();
  
  int i = 0;
  for (char ch : str)
  {
    str[i] = pop();
    i++;
  }
  
  cout << "Reversed string = " << str << endl;

  return 0;
}