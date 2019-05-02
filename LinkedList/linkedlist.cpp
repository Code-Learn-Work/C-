#include <iostream>
using namespace std;

class node
{
  public:
    int data;
    node *next;

    // Constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// find the length of the list
int sizeOfList(node *head)
{
    int len = 0;
    while (head != nullptr)
    {
        head = head->next;
        len++;
    }
    return len;
}

// Insert At head
void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

// Insert In Middle
void insertInMiddle(node *head, int data, int p)
{
    if (p >= sizeOfList(head))
    {
        cout << "Position is not valid !\nElement niot inserted." << endl;
        return;
    }
    int i = 0;
    while (head != nullptr and i < p - 1)
    {
        head = head->next;
        i++;
    }
    node *n = new node(data);
    n->next = head->next;
    head->next = n;
}

// Print the Linked List
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "x" << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    print(head);
    insertInMiddle(head, 10, 4);
    print(head);
    return 0;
}