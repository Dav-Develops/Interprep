//Write a program to implement a doubly linked list.


//pending yet


#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int val): data(val), prev(nullptr), next(nullptr){};
};
 //--------------------print the linked list--------------------
void traverseDoubLinkList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//------------------------Insertion Operations-------------------------
void insertNodeAtStart(Node* &head, int data){
    Node* newNode = new Node(data); //Create a newNode;
    newNode->next = head;  //Point the newNode toward the head(supposing head is at 2nd position)
    head->prev = newNode;  //Point head's previous to the newNode.
    head = newNode;        //Brint the 'head' to correct (first) position.
}

void insertNodeAtAGivenPosition(Node* &head, int position, int data){
    Node* temp = head;
    Node* newNode = new Node(data);
    if(position<0){
        cout<<"Invalide Position.";
        return;
    }
    if(position ==1 ){ //Inserting a node at the 'head' position.
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    for(int i=1; i<position-1 && temp!=nullptr; i++){
        temp = temp->next;
    } //after appraoching to the given postion:
    if(temp==nullptr){
        cout<<"Invalid position, List limit exceeded.";
        delete newNode;
        return;
    }
    //Actual Insertion here:
    if(temp->next!=nullptr){
        temp->next->prev = newNode; //temp ->next to newNode by prev <- later of temp.
        newNode->next = temp->next;
    }
    temp->next = newNode; // works for both inserting in last node or non last node.
    newNode->prev = temp;
}
void insertNodeAtEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }// When the loops reachs the last node:
    Node* newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
}
//------------------------------Deletion Operations---------------------
void deleteFirstNode(Node* &head){
    /*head = nullptr;
    delete head;*/ //This can empty entire linked list, that's why first copy the first node 
    //then delete it and move the head pointer to next node. AS showen:->
    Node* temporary = head;
    head->next->prev = nullptr; //2nd node was pointing to first node, erased that.
    head = head->next; //Move the 'head' pointer to its next position(or to the 2nd node);
    temporary = nullptr; //Important to give it null value, otherwise it becomes a dangling pointer,
    //(hold memory even after getting deleted).
    delete temporary;
}
void deleteSpecificNode(Node* &head, int position){
        if(position<0){
        cout<<"Invalide Position.";
        return;
    }
    if(position==1){
        Node* temporary = head;
        head->next->prev = nullptr;
        head = head->next;
        temporary = nullptr;
        delete temporary;
    }
    Node* temp = head;
    for(int i=1; i<position-1 && temp!=nullptr; i++){
        temp = temp->next;
    }
    if(temp==nullptr){
        cout<<"Invalide Location, exceeding the linked list nodes.";
    }
    Node* nodeToDelete;

}
int main(){
    Node* head = new Node(10); //create a node
    Node* second = new Node(11);
    head->next = second;
    Node* third = new Node(12);
    second->next = third;

    cout<<"Insertion: ";
    insertNodeAtStart(head, 9);  //insert a node
    insertNodeAtAGivenPosition(head, 4, 13);
    insertNodeAtAGivenPosition(head, 5, 14);
    insertNodeAtEnd(head, 100);
    traverseDoubLinkList(head); //print the doublyLinkedList.3
    //traverse in-between every function/method to understand easily;

    cout<<"\nDeletion: ";
    deleteFirstNode(head);
    deleteSpecificNode(head, 2);
    traverseDoubLinkList(head);
    return 0;
}