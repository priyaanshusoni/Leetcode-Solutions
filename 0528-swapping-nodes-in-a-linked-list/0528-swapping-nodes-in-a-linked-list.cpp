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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode* temp = head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        if(k>n){
            return head;
        }
        
        temp=head;
        
        int firstNode = k;
        int lastNode = n-(k-1);
        
        ListNode* firstN = temp;
        ListNode* lastN = temp;
        
        firstNode--;
        lastNode--;
        
        while(firstN!=NULL && firstNode>0){
            firstNode--;
            firstN=firstN->next;
        }
        while(lastN!=NULL && lastNode>0){
            lastNode--;
            lastN=lastN->next;
        }
        
        
        
        int x = firstN->val;
        firstN->val = lastN->val;
        lastN->val = x;
        
        
        
        return head;
    }
};