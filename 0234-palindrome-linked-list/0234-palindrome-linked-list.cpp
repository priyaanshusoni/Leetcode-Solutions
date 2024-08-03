/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode* reverseLL(ListNode* head){
    ListNode* temp = head;
    ListNode* prev = NULL;

    while(temp!=NULL){
        ListNode* front = temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }

    return prev;

}
    bool isPalindrome(ListNode* head) {
 if(head==nullptr || head->next==nullptr){
    return true;
 }
     ListNode* slow=head;
     ListNode* fast=head;

     while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
     }
    

     ListNode* second = reverseLL(slow->next);

     ListNode* first = head;

     while(second!=NULL){
        if(second->val != first->val){
            reverseLL(second);
            return false;
        }
        second = second->next;
        first=first->next;
     }


     reverseLL(second);


     return true;




    }
};