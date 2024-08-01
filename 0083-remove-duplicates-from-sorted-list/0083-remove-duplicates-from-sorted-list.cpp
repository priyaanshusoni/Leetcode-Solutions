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

       
        vector<int>dups;

        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp!=NULL&&temp->next!=NULL){
            ListNode* nextNode = temp->next;
            while(nextNode!=NULL && nextNode->val==temp->val){
                // if(dups.size()==0 || dups.back()!=nextNode->val){
                //     dups.push_back(nextNode->val);
                // }

                ListNode*Duplicate = nextNode;
                nextNode=nextNode->next;
                delete Duplicate;
                

            }
           temp->next=nextNode;
          if(nextNode)  temp=nextNode;



        }

        return head;

    }
};