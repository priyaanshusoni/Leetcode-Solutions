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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head==NULL){
              return NULL;
        }

        if(head->next==NULL && n==1){
            return NULL;
        }



        ListNode* temp = head;
        int cnt =0;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }

        int NodetoRemove = (cnt-n)+1;

        if(NodetoRemove==1){
            ListNode* front = head->next;
            delete head;

            return front;
        }


         cnt=0;
        temp = head;
        ListNode* prev = NULL;

        while(temp!=NULL){
            cnt++;
            if(cnt==NodetoRemove)break;
            prev = temp;

            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;


        return head;


    }
};