#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
void rev2(ListNode*& head, ListNode* curr, ListNode* prev) {
    if (curr == nullptr) {
        head = prev;
        return;
    }

    ListNode* forward = curr->next;
    curr->next = prev;
    rev2(head, forward, curr);
}
    ListNode* reverseList(ListNode* head) {

    rev2(head, head, nullptr);
    return head;
    }
};
int main(){
    //Give a linked list to the rev() here;
    return 0;
}