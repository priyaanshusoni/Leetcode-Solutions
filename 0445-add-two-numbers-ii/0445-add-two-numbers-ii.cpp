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
        temp->next = prev;
        prev=temp;
        temp = front;

    }


    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        ListNode* t1 = reverseLL(l1);
        ListNode* t2 = reverseLL(l2);
        int carry =0;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
     

        while(t1!=NULL || t2!=NULL){
          int sum = carry;
          if(t1) sum = sum + t1->val;
          if(t2) sum = sum + t2->val;


          if(sum>=10){
             carry = 1;
             ListNode* newnode = new ListNode(sum % 10);
            curr->next = newnode;
            curr=newnode;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;

          }

          else{
            carry=0;
           ListNode* newnode = new ListNode(sum);
           curr->next = newnode;
           curr=newnode;
           if(t1) t1 = t1->next;
           if(t2) t2 = t2->next;

          }

        }



         if(carry){
            ListNode* newnode = new ListNode(1);
            curr->next = newnode;
            ListNode* head = reverseLL(dummyNode->next);

            return head;
         }



         ListNode* head = reverseLL(dummyNode->next);


         return head;


    }
};