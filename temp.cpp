#include<iostream>
using namespace std;
class MyLinkedList {
public:
struct Node{
    int val;
    Node* next;
    Node(int data): val(data), next(nullptr){};
};
        Node* head;
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node*curr = head;
        while(curr && index>0){
            curr = curr->next;
            index--;
        }
        return curr ?curr->val:-1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* curr = head;
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }
        Node* curr = head;
        while(curr && index>1){
            curr = curr->next;
            index--;
        }
        if(!curr) //if, the node does not exist
        {return;}
        Node* newNode = new Node(val);
        newNode->next = curr->next;
        curr->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(!head){ //means if head == nullptr, then
        return;
        }
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            temp = nullptr;
            return;
        }
        Node* curr = head;
        for(int i=1; i<=index-2 && curr!=nullptr; i++){
            curr = curr->next;
        }
        if(!curr || !curr->next){return;}
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        temp = nullptr;
    }
};

int main() {
    MyLinkedList* obj = new MyLinkedList();

    obj->addAtHead(3);
    obj->addAtHead(3);
    obj->addAtHead(3);
    obj->addAtTail(2);
    obj->addAtIndex(2, 3);
    obj->deleteAtIndex(3);

    cout << obj->get(0) << " ";
    cout << obj->get(1) << " ";
    cout << obj->get(2) << " ";

    delete obj;
    return 0;
}