#include<iostream>
using namespace std;
// Implementing using structure:
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void traverseList(Node* head){ //take head aka the first node
    Node* temp= head; //store it in temp
    while(temp!= nullptr){ // if (temp=temp->next) means current node's 'next' not empty, contains 
                             // rhe address of the nect node.
        cout<<temp->data<<" "; //print 'data' of temp
        temp= temp->next; // temp is assigned the address of next node stored in 'next' part of temp
    }
}
int main(){
    Node* head = new Node(10); // First node is also called the 'head' node.
    Node* second = new Node(20);
    head->next = second;

    Node* third = new Node(30);
    second->next = third;

    traverseList(head);
    return 0;
}