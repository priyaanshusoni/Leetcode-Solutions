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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* temp = head;

        while(temp!=NULL && temp->next!=NULL){
             ListNode* nextnode = temp->next;

             while(nextnode!=NULL && nextnode->val==temp->val){
                ListNode* duplicate = nextnode;

                nextnode = nextnode->next;

                delete duplicate;
             }

             temp->next = nextnode;
             if(nextnode) temp=nextnode;
        }

        return head;
    }
};