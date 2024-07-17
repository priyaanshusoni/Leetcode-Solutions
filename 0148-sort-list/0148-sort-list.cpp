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


    ListNode* sortList(ListNode* head) {


               vector<int>sortA;

               ListNode *temp = head;

               while(temp!=NULL){
              sortA.push_back(temp->val);
              temp = temp->next;
               }


               sort(sortA.begin(),sortA.end());

               temp = head;
               int index = 0;
               while(temp!=NULL){
                temp->val = sortA[index];
                index++;
                temp=temp->next;
               }



               return head;
    }
};