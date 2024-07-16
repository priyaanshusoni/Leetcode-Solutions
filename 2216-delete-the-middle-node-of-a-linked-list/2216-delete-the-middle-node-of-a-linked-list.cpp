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
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL){
            return  NULL;
        }

        if(head->next==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        ListNode* prev = NULL;

        int n =0;

        ListNode* temp = head;

        while(temp!=NULL){
            n++;
            temp=temp->next;
        }


      if(n%2==0){
        while(fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;   
        }

        ListNode* deletenode = slow->next;
        slow->next = slow->next->next;

        delete deletenode;

        return head;

      }

         if(n%2!=0){
        while(fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;   
        }

        ListNode* deletenodee = slow;
        prev->next = slow->next;

        delete slow;

        return head;

      }

      return NULL;


    }
};