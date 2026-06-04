// #include<iostream>
// using namespace std;
// * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); //keep the dummy at beginning
        ListNode* current = dummy; //move current to next, when creating new node
        
        int carry = 0;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int a = (l1!=nullptr)? l1->val : 0;
            int b = (l2!=nullptr)? l2->val : 0;

            int sum = a+b+carry;
            carry = sum/10;
            
            current->next = new ListNode(sum%10);
            current = current->next;
            if(l1!=nullptr){
                l1 = l1->next;
            }
            if(l2!=nullptr){
                l2 = l2->next;
            }
        }
        return dummy->next; //return result from second node, cause first stores the data '0'.
    }
};
// void traverseList(ListNode* head){
//     ListNode* temp = head;
//     while(temp!=nullptr){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     ListNode* head = new ListNode(10);
//     ListNode* second = new ListNode(20);
//     head->next = second;
//     traverseList(head);
//     Solution a;
//     int a[5] = {1,2,3,4,5};
//     int b[5] = {6,7,8,9,10};
//     a.addTwoNumbers(a,b);
// }