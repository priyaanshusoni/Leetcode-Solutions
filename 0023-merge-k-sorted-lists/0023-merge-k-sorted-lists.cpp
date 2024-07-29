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
     ListNode* convertLL(vector<int>&ans){
        if(ans.size()==0) return nullptr;
        ListNode*head = new ListNode(ans[0]);
         
        ListNode*temp = head;

        for(int i=1;i<ans.size();i++){
            ListNode* newnode = new ListNode(ans[i]);
            temp->next= newnode;
            newnode->next=NULL;
            temp=newnode;
        }


        return head;
     }















    ListNode* mergeKLists(vector<ListNode*>& lists) {
      vector<int>ans;

      for(int i=0;i<lists.size();i++){
         ListNode* t1 = lists[i];
         while(t1!=NULL){
            ans.push_back(t1->val);
            t1=t1->next;
         }
      }
     sort(ans.begin(),ans.end());



     ListNode* newhead = convertLL(ans);


     return newhead;




    }
};