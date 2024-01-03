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

Node *mergeIterative(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            temp->next = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }
    while (head1 != NULL)
    {
        temp->next = head1;
        head1 = head1->next;
        temp = temp->next;
    }
    while (head2 != NULL)
    {
        temp->next = head2;
        head2 = head2->next;
        temp = temp->next;
    }
    return dummy->next;
}

Node *mergeRecursive(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    Node *result;
    if (head1->data <= head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
}

void insertAtHead(Node *&head, int value)
{
    // Create a new node with data = value
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
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
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
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
    Node *head1 = NULL;
    Node *head2 = NULL;
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    for (int i = 0; i < 4; i++)
        insertAtTail(head1, arr1[i]);
    for (int i = 0; i < 3; i++)
        insertAtTail(head2, arr2[i]);
    display(head1);
    display(head2);
    // Node *newHead = mergeIterative(head1, head2);
    Node *newHead = mergeRecursive(head1, head2);
    display(newHead);
    return 0;
}