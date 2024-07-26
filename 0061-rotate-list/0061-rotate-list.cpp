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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL){
            return head;
        }


        ListNode*temp = head;
        int n=0;
       
       while(temp!=NULL){
        n++;
        temp=temp->next;
       }



       k= k%n;

       if(k==0){
        return head;
       }

        ListNode* lastNode = head;
      while(lastNode->next!=NULL){
        lastNode=lastNode->next;

      }

      lastNode->next=head;

      ListNode* tail = head;

      int tailnode = n-k;

      tailnode--;

      while(tailnode>0){
        tailnode--;
        tail=tail->next;
      }


       ListNode* newhead = tail->next;

       tail->next=NULL;

      return newhead;

    }
};