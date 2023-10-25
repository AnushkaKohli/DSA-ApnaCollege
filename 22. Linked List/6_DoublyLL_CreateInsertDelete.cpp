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

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }
    Node *newNode = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
        return;
    Node *nodeToDelete = head;
    head = head->next;
    head->prev = NULL;
    delete nodeToDelete;
}

void deleteAtPosition(Node *&head, int position)
{
    if (position == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (temp != NULL && count != position)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    delete temp;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    display(head);
    deleteAtPosition(head, 3);
    display(head);
    deleteAtPosition(head, 1);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}