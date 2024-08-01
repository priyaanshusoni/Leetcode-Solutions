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
    ListNode* swapPairs(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummyNode = new ListNode(-1);

        ListNode* curr= dummyNode;
        ListNode*temp = head;
        ListNode* newhead = temp->next;

        while(temp!=NULL&&temp->next!=NULL ){
            ListNode* first =temp;
            ListNode* second= temp->next;
             curr->next = second;
            first->next = second->next;
            second->next = first;

            // Move curr to the next pair
            curr = first;
            temp = first->next;

        }

        if(temp){
            curr->next=temp;
        }

        return dummyNode->next;

    }
};