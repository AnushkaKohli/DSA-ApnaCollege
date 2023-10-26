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

void intersect(Node *&head1, Node *&head2, int position)
{
    Node *temp1 = head1;
    position--;
    while (position--)
        temp1 = temp1->next;
    Node *temp2 = head2;
    while (temp2->next != NULL)
        temp2 = temp2->next;
    temp2->next = temp1;
}

int countLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

int isIntersection(Node *&head1, Node *&head2)
{
    int length1 = countLength(head1);
    int length2 = countLength(head2);
    int difference = 0;
    Node *ptr1, *ptr2;
    // ptr1 stores the value of the head of the longer linked list
    if (length1 > length2)
    {
        difference = length1 - length2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        difference = length2 - length1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (difference--)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
            return -1;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
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
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    intersect(head1, head2, 5);
    display(head1);
    display(head2);
    cout << "Intersection point of the two linked lists is: " << isIntersection(head1, head2) << endl;
    return 0;
}