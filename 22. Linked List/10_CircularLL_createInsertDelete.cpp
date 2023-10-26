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
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }
    Node *temp = head;
    Node *newNode = new Node(value);
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    Node *toDelete = head;
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deleteAtTail(Node *&head)
{
    Node *temp = head;
    while (temp->next->next != head)
        temp = temp->next;
    Node *toDelete = temp->next;
    temp->next = head;
    delete toDelete;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    return 0;
}