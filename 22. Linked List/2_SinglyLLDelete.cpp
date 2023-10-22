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

void deleteAtHead(Node *&head)
{
    if (head == NULL)
        return;
    Node *nodeToDelete = head;
    head = head->next;
    delete nodeToDelete;
}

void deleteAtTail(Node *&head){
    if(head == NULL)
        return;
    Node *temp = head;
    Node *preptr;
    while(temp->next != NULL){
        preptr = temp;
        temp = temp->next;
    }
    preptr->next = NULL;
    delete temp;
}

void deleteGivenValue(Node *&head, int value)
{
    if (head == NULL)
        return;
    if (head->data == value && head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;

    // Traverse the linked list till the node before the node to be deleted is stored in temp
    while (temp->next->data != value)
        temp = temp->next;

    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void insertAtHead(Node *&head, int value)
{
    // Create a new node with data = value
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
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

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    display(head);
    // deleteGivenValue(head, 2);
    // deleteAtHead(head);
    deleteAtTail(head);
    display(head);
    return 0;
}