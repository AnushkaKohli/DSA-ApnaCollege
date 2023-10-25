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

void appendLastKNodes(Node *&head, int k)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    if (length > k)
    {
        temp = head;
        int count = 1;
        while (count < length - k)
        {
            temp = temp->next;
            count++;
        }
        Node *newHead = temp->next;
        temp->next = NULL;
        temp = newHead;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = head;
        head = newHead;
    }
}

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    display(head);
    appendLastKNodes(head, 3);
    display(head);
    return 0;
}