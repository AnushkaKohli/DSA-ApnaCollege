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

Node *reverseLL(Node *&head)
{
    Node *prevPtr = NULL;
    Node *currPtr = head;
    Node *nextPtr;
    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

Node *reverseRecursive(Node *&head){
    if(head == NULL || head-> next == NULL)
        return head;
    Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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
    // Node *newHead = reverseLL(head);
    // display(newHead);
    Node *newHead = reverseRecursive(head);
    display(newHead);
    return 0;
}