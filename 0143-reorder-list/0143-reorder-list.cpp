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

   ListNode* convert2LL(vector<int>&arr){
        ListNode* head = new ListNode(arr[0]);

        ListNode* temp = head;

        for(int i=1;i<arr.size();i++){
            ListNode* newnode = new ListNode(arr[i]);
            temp->next = newnode;
            temp=newnode;
        }


        return head;
   }


    void reorderList(ListNode* head) {
        vector<int>arr;
        vector<int>ordered;

        ListNode* temp = head;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int i=0;
        int j=arr.size()-1;

        while(i<=j){
            ordered.push_back(arr[i]);
            ordered.push_back(arr[j]);

            i++;
            j--;
        }



       ListNode* newhead = convert2LL(ordered);

     temp=head;

    while(temp!=NULL && newhead!=NULL){
       temp->val = newhead->val;
       temp=temp->next;
       newhead= newhead->next;
    }

              


      
    
    }
    
    
};