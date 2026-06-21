// 👉🏻 This programe is looking large, but clears this topic in singly programe with all operations.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {};
};
Node *creaeteDoublyCircularLinkedList(int Initial_val, int limit, int step)
{
    Node *head = new Node(Initial_val);
    Node *temp = head;
    for (int i = Initial_val + step; i <= limit; i += step)
    {
        Node *newNode = new Node(i);
        // cout<<"\n"<<i<<" "<<step<<" "<<limit;
        temp->next = newNode; // Set new node after temp
        newNode->prev = temp; // new node is connected from the left side , and will be connected deom right side in above line.
        temp = newNode;       // temp is moved by one (pointing to next node)
    }
    temp->next = head; // link the last node to the first.
    head->prev = temp; // Both links are set 😃
    return head;
}
int sizeOfDoublyCircularLinkedList(Node *head)
{
    int size = 1;
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
        size++;
    }
    return size;
}
void traverseDoublyCircularLinkedList(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != nullptr && temp != head);
    cout << "\n";
}
void insertNodeAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        newNode->prev = newNode;
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node *lastNode = head->prev;
    lastNode->next = newNode;
    newNode->prev = lastNode;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    cout << "Node inserted at start: ";
    traverseDoublyCircularLinkedList(head);
}
void insertNodeAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *lastNode = head->prev;
    lastNode->next = newNode;
    newNode->prev = lastNode;
    newNode->next = head;
    head->prev = newNode;
    cout << "Node inserted at the end: ";
    traverseDoublyCircularLinkedList(head);
}
void insertNodeAtGivenPosition(Node *&head, int position, int data)
{
    if (position <= 0)
    {
        cout << "Invalid position.";
        return;
    }

    if (position == 1)
    {
        Node *newNode = new Node(data);
        Node *lastNode = head->prev;
        lastNode->next = newNode;
        newNode->prev = lastNode;
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        cout << "Node inserted at " << position << " position: ";
        traverseDoublyCircularLinkedList(head);
        return;
    }
    int size = sizeOfDoublyCircularLinkedList(head);
    if (position > size + 1) // size+1, because 'insertion places' are always 'number of nodes +1' in a DoubCircLinkList
    {
        cout << "Range Exceeded!, change insertion position.";
        return;
    }
    Node *newNode = new Node(data);
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    Node *nextNode = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = nextNode;
    nextNode->prev = newNode;
    cout << "Node inserted at " << position << " position: ";
    traverseDoublyCircularLinkedList(head);
}
// ----------------------- Deletion Code -------------------------
void deleteFirstNode(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = nullptr;
        cout << "\nFirst Node is deleted: ";
        traverseDoublyCircularLinkedList(head);
        return;
    }
    Node *nextNode = head->next;
    Node *lastNode = head->prev;
    nextNode->prev = lastNode;
    lastNode->next = nextNode;
    head->prev = nullptr;
    head->next = nullptr;
    delete head;
    head = nextNode;
    cout << "\nFirst Node is deleted: ";
    traverseDoublyCircularLinkedList(head);
}
void deleteSpecificNode(Node *&head, int nthNode)
{
    if (nthNode <= 0)
    {
        cout << "Invalide entry!";
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = nullptr;
        return;
    }
    if (nthNode == 1)
    {
        Node *nextNode = head->next;
        Node *lastNode = head->prev;
        nextNode->prev = lastNode;
        lastNode->next = nextNode;
        delete head;
        head = nextNode;
        cout << "First Node is deleted: ";
        traverseDoublyCircularLinkedList(head);
        return;
    }
    Node *temp = head;
    int size = sizeOfDoublyCircularLinkedList(head);
    if (nthNode > size + 1)
    {
        return;
    }
    for (int i = 1; i < nthNode - 1; i++)
    {
        temp = temp->next;
    }
    Node *nodeToBeDeleted = temp->next;
    temp->next = nodeToBeDeleted->next;
    nodeToBeDeleted->next->prev = temp;
    delete nodeToBeDeleted;
    cout << "Node " << nthNode << " is deleted: ";
    traverseDoublyCircularLinkedList(head);
}
void deleteEndNode(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *lastNode = head->prev;
    lastNode->prev->next = head;
    head->prev = lastNode->prev;
    ;
    delete lastNode;
    cout << "Last node is deleted: ";
    traverseDoublyCircularLinkedList(head);
    return;
}
//---------------------validate again this function
void deleteNodeByValue(Node *&head, int val)
{
    int size = sizeOfDoublyCircularLinkedList(head);
    Node *temp = head;
    if (head->data == val)
    {
        if (head->next == head)
        {
            delete head;
            head = nullptr;
            return;
        }
        Node *lastN = head->prev;
        Node *nextN = head->next;
        lastN->next = nextN;
        nextN->prev = lastN;
        delete head;
        head = nextN;
        cout << "Node with value " << val << " deleted: ";
        traverseDoublyCircularLinkedList(head);
        return;
    }
    for (int i = 1; i <= size && temp->data != val; i++)
    {
        temp = temp->next;
    }
    Node *prevN = temp->prev;
    Node *nextN = temp->next;
    prevN->next = nextN;
    nextN->prev = prevN;
    delete temp;
    cout << "A Node with value: " << val << " is deleted: ";
    traverseDoublyCircularLinkedList(head);
    return;
}
int main()
{
    Node *DoublyCircularLinkedList_Head = creaeteDoublyCircularLinkedList(10, 100, 10);
    traverseDoublyCircularLinkedList(DoublyCircularLinkedList_Head);
    insertNodeAtStart(DoublyCircularLinkedList_Head, 9);
    insertNodeAtEnd(DoublyCircularLinkedList_Head, 101);
    insertNodeAtGivenPosition(DoublyCircularLinkedList_Head, 13, 51);
    deleteFirstNode(DoublyCircularLinkedList_Head);
    deleteSpecificNode(DoublyCircularLinkedList_Head, 1);
    deleteEndNode(DoublyCircularLinkedList_Head);
    deleteNodeByValue(DoublyCircularLinkedList_Head, 60);
    return 0;
}