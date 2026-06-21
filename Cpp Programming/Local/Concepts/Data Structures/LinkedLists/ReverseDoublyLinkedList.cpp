#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val): data(val), prev(nullptr), next(nullptr){};
};
Node* createDoubLL(int InitialVal, int limit, int step){
    Node* head = new Node(InitialVal);
    Node* temp = head;
    temp->prev = nullptr;
    
    for(int i=InitialVal+step; i<=limit; i+=step){
        Node* newNode = new Node(i);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }
    return head;
}
void traverseDoubLL(Node* head){
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
Node* reverseDoubLL(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    Node* temp = head->prev;
    head->prev = head->next;
    head->next = temp;
    if(head->prev==nullptr){return head;}
    return reverseDoubLL(head->prev);
}
Node* reverseDoubLLinKGroups(Node* head, int k){
    if(head == nullptr) return nullptr;

    Node* curr = head;
    Node* newHead = nullptr;
    Node* tail = nullptr;
    int count = 0;

    // reverse k nodes
    while(curr != nullptr && count < k){
        Node* next = curr->next;

        curr->next = curr->prev;
        curr->prev = next;

        tail = curr;        // last processed becomes new head of this segment
        curr = next;
        count++;
    }

    newHead = tail;

    //confusing part from here
    // connect remaining list
    if(curr != nullptr){
        Node* rest = reverseDoubLLinKGroups(curr, k);
        head->next = rest;
        if(rest != nullptr){
            rest->prev = head;
        }
    } else {
        head->next = nullptr;
    }

    return newHead;
    //to here
}
int main(){
    Node* L1 = createDoubLL(1, 10, 1);
    traverseDoubLL(L1);
    
    Node* L2 = reverseDoubLL(L1);
    traverseDoubLL(L2);
    Node* L3 = createDoubLL(1, 10, 1);
    traverseDoubLL(reverseDoubLLinKGroups(L3,2));
    return 0;
}