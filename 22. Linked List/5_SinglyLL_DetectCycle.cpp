// FLOYD'S CYCLE DETECTION ALGORITHM OR HARE AND TORTOISE ALGORITHM

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

void makeCycle(Node *&head, int position)
{
    Node *temp = head;
    Node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == position)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(Node *head)
{
    Node *slowPtr = head;
    Node *fastPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if (fastPtr == slowPtr)
            return true;
    }
    return false;
}

void removeCycle(Node *head)
{
    Node *slowPtr = head;
    Node *fastPtr = head;
    do
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    } while (slowPtr != fastPtr);

    fastPtr = head;
    while (slowPtr->next != fastPtr->next)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }
    slowPtr->next = NULL;
}

void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
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
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head, 3);
    // display(head);
    cout << "Is cycle present before removal: " << detectCycle(head) << endl;
    removeCycle(head);
    cout << "Is cycle present after removal: " << detectCycle(head) << endl;
    display(head);
    return 0;
}