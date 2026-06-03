#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void traverseList(Node* head){
    Node* temp= head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    head->next = second;

    Node* third = new Node(30);
    second->next = third;

    traverseList(head);
    return 0;
}