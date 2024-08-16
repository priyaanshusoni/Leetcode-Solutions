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
ListNode* convert2LL(vector<int>&ans){
      if(ans.size()==0){
          return NULL;
      }
      ListNode* head = new ListNode(ans[0]);
      
      ListNode* temp = head;
      
      for(int i=1;i<ans.size();i++){
          ListNode* newnode = new ListNode(ans[i]);
          temp->next=newnode;
          temp=newnode;
      }
      
      return head;
  }
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }
        
        
        vector<int>ans;
        
        ListNode* temp=head;
        
        ListNode*prev=NULL;
        
        while(temp!=NULL){
            ListNode*front=temp->next;
            if(temp==head && front&& temp->val!=front->val){
               
                  ans.push_back(temp->val);
               
            }
            
            
            else if(temp->next==NULL &&prev&& prev->val!=temp->val){
                ans.push_back(temp->val);
            }
            
            else if(front&& temp->val!=front->val &&prev&& temp->val!=prev->val){
                ans.push_back(temp->val);
            }
            
            
            prev =temp;
            temp=temp->next;
        }
        
        
        ListNode* newhead = convert2LL(ans);
        
        
        return newhead;
        

       
    }
};