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
    ListNode* partition(ListNode* head, int x) {
        vector<int>smaller;
        vector<int>greater;

        ListNode* temp = head;

        while(temp!=NULL){
            if(temp->val < x){
                smaller.push_back(temp->val);
                temp=temp->next;

            }
           else if(temp->val>=x){
                greater.push_back(temp->val);
                temp=temp->next;
            }
        }

        temp = head;

       for(int i=0;i<smaller.size();i++){
        temp->val = smaller[i];
        if(temp) temp=temp->next;
       }

       for(int j=0;j<greater.size();j++){
        temp->val = greater[j];
        if(temp) temp=temp->next;
       }


       return head;

    }
};