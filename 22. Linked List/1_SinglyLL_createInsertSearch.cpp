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

void insertAtHead(Node *&head, int value)
{
    // Create a new node with data = value
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int value)
{
    // Create a new node with data = value
    Node *newNode = new Node(value);

    // Check if the head is NULL then make the newNode as head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Otherwise, traverse the linked list till the last node and then make the newNode as the next node of the last node
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(Node *head)
{
    // Check if the head is NULL then print "NULL" and return
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }

    // Otherwise, traverse the linked list and print the data of each node
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(Node *head, int key)
{
    // Check if the head is NULL then return false
    if (head == NULL)
        return false;

    // Otherwise, traverse the linked list and check if the key is found then return true
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    display(head);
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtTail(head, 4);
    display(head);
    insertAtTail(head, 5);
    display(head);
    insertAtTail(head, 6);
    display(head);
    cout << search(head, 4) << endl;
    cout << search(head, 7) << endl;
    return 0;
}