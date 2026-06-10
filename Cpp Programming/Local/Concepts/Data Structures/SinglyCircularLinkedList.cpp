#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node( int val): data(val), next(nullptr){};
};
void traverseCircularLinkedList(Node* head){
    if(head == nullptr){ //if the list is empty, return
        return;
    }
    Node* temp = head;
    while(true){
        cout<<temp->data<<" ";
        temp = temp->next;
        if(temp == head){
            break;
        }
    }
}
Node* createCircularSinglyLinkedList(int start, int limit, int step){
    Node* head = new Node(start); //First node created here
    Node* temp = head;
    for(int i=start+step;i<=limit; i+=step){ //2nd to last node created here
        Node* newNode = new Node(i);
        temp->next = newNode; // Temp's next node will be the newNode
        temp = newNode; // now temp is updated and pointing to the newNode (like we do temp=temp->next;)
    }
    temp->next = head; //last pointer points to the head of the lisst
    return head;
}
void insertNodeAtStarting(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head==nullptr){ //if list is empty
        newNode->next = newNode; //when a single node exists in circular list, it points to itself
        head = newNode;
        head->data = data;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){ // To approach the last node and link it to the first one.
        temp = temp->next;
    }
    newNode->next = head;
    head = newNode;
    temp->next = head; //linking last node to the first.
    cout<<"\nNode inserted at starting: ";
    traverseCircularLinkedList(head);
}
void inesrtNodeAtEnd(Node* &head, int data){
    Node* temp = head;
    while (temp!= nullptr && temp->next != head)
    {
        temp = temp->next;
    }// loop ends where temp->next = head;
    Node* newNode = new Node(data);
    newNode->next = temp->next; // OR newNode->next = head;
    temp->next = newNode;
    cout<<"\nNode is insert at the End: ";
    traverseCircularLinkedList(head);
}
int main()
{
    Node* singlyLinkedList1_Head = createCircularSinglyLinkedList(10, 100,10);
    traverseCircularLinkedList(singlyLinkedList1_Head);
    insertNodeAtStarting(singlyLinkedList1_Head, 9);
    inesrtNodeAtEnd(singlyLinkedList1_Head, 101);
    return 0;
}