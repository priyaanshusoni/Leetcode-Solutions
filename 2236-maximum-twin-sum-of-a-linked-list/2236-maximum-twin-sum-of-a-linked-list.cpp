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
    int pairSum(ListNode* head) {
        vector<int>temparr;

        ListNode* temp = head;

        while(temp!=NULL){
            temparr.push_back(temp->val);
            temp=temp->next;
        }

        int i=0;
        int j=temparr.size()-1;
        int MaxtwinSum=0;

        while(i<j){
           int twinSum = temparr[i] + temparr[j];
           MaxtwinSum = max(twinSum , MaxtwinSum);
          i++;
          j--;
        }


        return MaxtwinSum;
    }
};