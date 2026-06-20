#include<iostream>
using namespace std;
// The only difference between implementing a linked list with struct and ...with class, is that
// a class allows us to use n an access specifier (data can be encapsulated).
// This list is implemented without privatizing data (without using 'private' specifier).
class Node { //By default this data would be private:
    public:
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr){};
};
void traverseSinglyLinkedList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    // Manual way:
    // Node* head = new Node(10);
    // Node* second = new Node(20);
    // head->next = second;

    //Automatic:
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i=10; i<=50; i+=10){
        Node* newNode = new Node(i);
        if(head==nullptr){
            head=newNode; //head points to new/next node
            tail = head; //tail is also set at head's position
        }
        else{
            tail->next = newNode; //tail points to next/ new node
            tail = tail->next; //tail moves to next node;
        }
    }
    traverseSinglyLinkedList(head);
    return 0;
}