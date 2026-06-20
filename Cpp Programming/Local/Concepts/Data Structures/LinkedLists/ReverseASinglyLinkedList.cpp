#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {};
};
Node *createASinglyLinkedList(int InitialValue, int updateBy, int limit)
{
    Node *head = new Node(InitialValue);
    Node *temp = head;
    for (int i = InitialValue + updateBy; i <= limit; i += updateBy)
    {
        Node *newNode = new Node(i);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
void traverseLinkedList(Node *head)
{
    Node *temp = head;
    cout<<"\n";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//---------------Iterative Solution-------------------
Node *reverseALinkedList1(Node *&head)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head=prev;
    return head;
}
//-----------------Recursive Solution-------------------
void rev2(Node*& head, Node* curr, Node* prev) {
    if (curr == nullptr) {
        head = prev;
        return;
    }

    Node* forward = curr->next;
    curr->next = prev;
    rev2(head, forward, curr);
}

Node* reverseALinkedList2(Node* head) {
    rev2(head, head, nullptr);
    return head;
}
int main()
{
    Node *L1_Head = createASinglyLinkedList(1, 1, 10);
    traverseLinkedList(L1_Head);

    Node *L1Reversed_Head = reverseALinkedList1(L1_Head);
    traverseLinkedList(L1Reversed_Head);

    Node* L1Reversed_HeadRecursive = reverseALinkedList2(L1_Head);
    traverseLinkedList(L1Reversed_HeadRecursive);

    return 0;
}