# Array

## Traversing an Array

## Insertion of an element
### 1. At the beginning
### 2. In the middle
### 3. At the end

## Deletion of an element
### 1. From the beginning
### 2. From the middle
### 3. From the end

## Sorting Algorithms
### 1. Quick Sort
### 2. Insertion Sort
### 3. Selection Sort
### 4. Merge Sort

---

# Linked Lists

## Characteristics of Linked Lists:
1. dynamic in nature
2. elements can be added/deleted in the linked list as per requirement
3. node contains at least one pointer variable
4. linked list always has a head pointer having the memory address of the first element in it
5. the last element of the linked list has a pointer variable whose value is always null

## Types of Linked Lists
### 1. Singly linked

![singly linked list](/assets/images/singlell.png)

```cpp
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
```

```cpp
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
```
### 2. Double linked
![doubly linked](/assets/images/doublell.png)

### 3. Circular linked
![circular linked](/assets/images/circularll.png)

## Traversing

- acccessing all the elements

```cpp
void traverse(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp << " " << temp->data << endl;
    temp = temp->next;
  }
}
```
## Searching

```cpp
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
```

## Insertion of an element
### 1. At the beginning
### 2. In the middle
### 3. At the end
