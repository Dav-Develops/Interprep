#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {};
};

void traverseLinkedList(Node *head) // print the linkedList
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
} // ------------LinkedList is ready till here.------------

//------------------------Node Insertion-------------------

void insertNodeAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    cout << "\nNode added at first place:";
    traverseLinkedList(head);
} // A Node inserted at the starting place.

void insertNodeAtPosition(Node *&head, int position, int data)
{
    Node *newNode = new Node(data);
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
    } // after approaching to the 'position' through looping process:
    if (temp == nullptr)
    {
        cout << "\nInvalid Position11";
        delete newNode;
        return;
    }
    // Actual insertion here:
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "\nNode inserted at " << position << "th place: ";
    traverseLinkedList(head); // print the linkedList
}

void insertNodeAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        temp->next = newNode;
    }
    cout << "\nNode inserted at the end: ";
    traverseLinkedList(head);
} // Node inserted at last.

//-----------------Node Deletion---------------------
void deleteFirstNode(Node *&head)
{
    Node *temp = head; // copy first node, which will have to be deleted.
    head = head->next; // move head to 2nd node.
    delete temp;
    cout << "\n\nFirst Node deleted: ";
    traverseLinkedList(head);
}

void deleteNodeAtPosition(Node *head, int position)
{
    if (head == nullptr || position < 0)
    {
        cout << "Invalid Posiotion";
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    Node *temp = head;
    for (int i = 1; i <= position - 2 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "\nInvalide Position/Location.";
    }
    // Actual Deletion from the given location:
    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    cout << "\n"<< position << "th node is deleted: ";
    traverseLinkedList(head); // print the linkedList
}

void deleteEndNode(Node *&head)
{
    if (head == nullptr)
    {
        cout << "This Linked List is Empty.";
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next != nullptr) // Checking address stored in secondlast node
    // Because if only the last node deleted, the second last node's 'next' will still point to
    //  the deleted memory.
    {
        temp = temp->next;
    }
    delete temp->next;    // Free the memory
    temp->next = nullptr; // Now break the chain from undefined memory
    cout << "\nLast Node is deleted: ";
    traverseLinkedList(head); // print the linkedList
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
    //When all possible cases exhausted, the only remaining is:
    cout<<"Value is not found in this linked list.";
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    head->next = first;
    Node *second = new Node(30);
    first->next = second;

    traverseLinkedList(head); // print the linkedList

    // Node insertion
    insertNodeAtStart(head, 100);
    insertNodeAtPosition(head, 2, 200);
    insertNodeAtEnd(head, 500);
    // Node deletion:
    deleteFirstNode(head);

    // Nodes can be deleted int two ways:
    //(1). From a given position/location.
    //(2). Nodes containing a specific/given value.
    // Doing with 1st method (from a position):

    deleteNodeAtPosition(head, 2);
    deleteEndNode(head);
    deleteNodeByValue(head, 30);
    return 0;
}