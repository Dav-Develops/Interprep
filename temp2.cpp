// Write a program to implement all operations on singly linked list.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {};
};

// --------------print linked list-----------------
void traverseLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// ----------------insertion methods---------------
void insertNodeAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    // print linked list:
    cout << "\nA Node is inserted at the beginning: ";
    traverseLinkedList(head);
}

void insertNodeAtPosition(Node *&head, int position, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr || position < 0)
    {
        cout << "Invalid position";
        return;
    }
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        temp->next = newNode;
        return;
    }
    // Insertion at given position:
    newNode->next = temp->next;
    temp->next = newNode;
    // print linked list:
    cout << "\nA Node is inserted at " << position << "th position: ";
    traverseLinkedList(head);
}

void insertNodeAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    // print linked list:
    cout << "\nA Node is inserted at the End: ";
    traverseLinkedList(head);
}

// ------------------Node Deletion---------------
void deleteInitialNode(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    cout << "\nInitial Node is deleted: ";
    traverseLinkedList(head);
}
void deleteSpecificNode(Node *&head, int position)
{
    if (head == nullptr || position < 1)
    {
        cout << "Invalide position.";
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    { // check if the node is already empty.
        cout << "rgknirgjpe";
        return;
    }
    Node *nToDelete = temp->next;
    temp->next = nToDelete->next;
    delete nToDelete;
    cout << "\nDeleted " << position << "th node: ";
    traverseLinkedList(head);
}
void deleteEndNode(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    Node *nodeToDelete = temp->next;
    temp->next = nullptr;
    delete nodeToDelete;
    cout << "\nLast Node is deleted: ";
    traverseLinkedList(head);
}
// --------------Node deletion by value---------------
void deleteNodeByValue(Node *head, int val)
{
    if (head == nullptr)
    {
        cout << "Linked List is empty: ";
        return;
    }
    if (head->data == val)
    {
        Node *nodeToDelete = head;
        head = head->next;
        delete nodeToDelete;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == val)
        {
            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            cout << "\nNode with " << val << " is deleted: ";
            traverseLinkedList(head);
            return;
        }
        temp = temp->next;
    }
    cout<<"Value is not found in this linked list.";
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    head->next = second;
    Node *third = new Node(30);
    second->next = third;

    traverseLinkedList(head);

    insertNodeAtStart(head, 100);
    insertNodeAtPosition(head, 4, 200);
    insertNodeAtEnd(head, 500);
    deleteInitialNode(head);
    deleteSpecificNode(head, 3);
    deleteEndNode(head);

    deleteNodeByValue(head, 30);
    return 0;
}