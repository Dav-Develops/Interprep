#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {};
};

void traverseLinkedList(Node *head) //print the linkedList
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}   //LinkedList is ready till here.

void insertNodeAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    cout<<"\nNode added at first place:";
    traverseLinkedList(head);
} //A Node inserted at the starting place.

void insertNodeAtPosition(Node* &head, int position, int data){
    Node* newNode = new Node(data);
    if(position ==1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=1; i<position-1 && temp!=nullptr; i++){
        temp = temp->next;
    } // after approaching to the 'position' through looping process:
    if(temp == nullptr){
        cout<<"\nInvalid Position11";
        delete newNode;
        return;
    }
    // Actual insertion here:
    newNode->next = temp->next;
    temp->next = newNode;

}

void insertNodeAtEnd(Node* head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    if(temp->next == nullptr){
    temp->next = newNode;
    }
    cout<<"\n";
    traverseLinkedList(head);
} //Node inserted at last.

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    head->next = first;
    Node *second = new Node(30);
    first->next = second;

    traverseLinkedList(head); //print the linkedList
    insertNodeAtStart(head, 100);
    insertNodeAtPosition(head, 2, 200);
        cout<<"\n";
    traverseLinkedList(head);//print the linkedList
    insertNodeAtEnd(head, 500);
    return 0;
}