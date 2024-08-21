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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL){
            return NULL;
        }

        if(head->next==NULL && head->val==val){
            return NULL;
        }

        ListNode* temp = head;

        ListNode* prev =NULL;
        while(temp!=NULL){
           
            if(temp->val==val && temp==head){
                ListNode* deletenode = head;
                head=head->next;
                temp=head;

                delete deletenode;


            }

            else if(temp->val==val){
                ListNode* deletenode2 = temp;
              if(prev)  prev->next= temp->next;
            
              temp=temp->next;
            delete deletenode2;

                
            }

            else{
                prev=temp;
                temp=temp->next;
            }


           
        }


        return head;
        
    }
};