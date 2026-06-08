#include<iostream>
using namespace std;

// * Definition for singly-linked list.
  struct ListNode{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    //   ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){ //Just a simple function, but taking
                                                         //2 listnodes at a time, and returning 1 listnode.
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int a = (l1!=nullptr) ? l1->val : 0;
            // cout<<a<<"+"; //Debug prints for main calculation of the question.
            int b = (l2!=nullptr) ? l2->val : 0;
            // cout<<b<<"+"<<carry<<' '; //Debug prints for main calculation of the question.
            
            int sum = a+b+carry;
            // cout<<"( sum: "<<sum<<")"; //Debug prints for main calculation of the question.
            carry = sum/10;
            // cout<<"{"<<carry<<"}"; //Debug prints for main calculation of the question.
            current->next = new ListNode(sum%10);
            current = current->next;
            // cout<<" ["<<current->val<<"]\n"; //Debug prints for main calculation of the question.

            if(l1!=nullptr){
                l1 = l1-> next;
            }
            if(l2!=nullptr){
                l2 = l2-> next;
            }
        }
        return dummy->next;
    }
};
void traverseLinkedList(ListNode* head){
    while(head!=nullptr){
        cout<< head->val <<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    //Number342 represented as : 619
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(1);
    // l1->next->next = new ListNode(6);

    //Number465 represented as : 785
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(8);
    // l2->next->next = new ListNode(7);

    Solution obj;
    ListNode* result = obj.addTwoNumbers(l1, l2);
    
    cout<<"First List: ";traverseLinkedList(l1);
    cout<<"Second List: ";traverseLinkedList(l2);
    cout<<"Result: ";
    traverseLinkedList(result);
    
    return 0;
}