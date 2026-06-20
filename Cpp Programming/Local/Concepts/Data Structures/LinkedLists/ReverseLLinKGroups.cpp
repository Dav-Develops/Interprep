#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr){};
};
Node* createLL(int initialVal, int limit, int step){
    Node* head = new Node(initialVal);
    Node* temp = head;
    for( int i=initialVal+step; i<= limit; i+=step){
        Node* newNode = new Node(i);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
void traverseLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
Node* reverseKGroups(Node* head, int k){
    int count = 0;
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    if(head == nullptr ){return head;}
    
    //reverse first k nodes:
    while (count<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //recursion for remaining list:
    if(next != nullptr){
        head->next = reverseKGroups(next, k);
    }
    //new head of this segment:
    return prev;
    
}
int main(){
    Node* L1 = createLL(1,40,1);
    traverseLL(L1);
    
    Node* L2 = reverseKGroups(L1, 2);
    traverseLL(L2);

    return 0;
}