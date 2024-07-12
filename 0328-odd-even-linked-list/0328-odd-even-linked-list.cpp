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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next ==NULL) return head;
        vector<int>Arr;
        ListNode* temp =head;

        while(temp!=NULL && temp->next!=NULL){
            Arr.push_back(temp->val);

            temp=temp->next->next;
        }

        if(temp) Arr.push_back(temp->val);

        temp = head->next;

        while(temp!=NULL && temp->next!=NULL){
            Arr.push_back(temp->val);

            temp=temp->next->next;
        }

        if(temp) Arr.push_back(temp->val);




        int index =0;
        temp = head;

        while(temp!=NULL){
            temp->val = Arr[index];
            index++;
            temp=temp->next;
        }


        return head;
    }
};