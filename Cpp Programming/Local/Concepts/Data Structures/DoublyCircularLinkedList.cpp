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
int main()
{
    Node *DoublyCircularLinkedList_Head = creaeteDoublyCircularLinkedList(10, 100, 10);
    traverseDoublyCircularLinkedList(DoublyCircularLinkedList_Head);
    insertNodeAtStart(DoublyCircularLinkedList_Head, 9);
    insertNodeAtEnd(DoublyCircularLinkedList_Head, 101);
    insertNodeAtGivenPosition(DoublyCircularLinkedList_Head, 13, 51);
    return 0;
}