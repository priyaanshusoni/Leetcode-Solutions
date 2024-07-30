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
if(head==NULL || head->next==NULL){
    return head;
}
       vector<int>v;
       set<int>st;

       ListNode*temp = head;
       while(temp!=NULL){
        st.insert(temp->val);
        temp=temp->next;
       }

       for(auto it: st){
          v.push_back(it);
       }

       sort(v.begin(),v.end());

       ListNode* newhead = new ListNode(v[0]);
       ListNode* temp2 = newhead;

       for(int i=1;i<v.size();i++){
        ListNode* newnode = new ListNode(v[i]);
        newnode->next=NULL;
        temp2->next = newnode;
        temp2=newnode;
       }


       return newhead;
        
    }
};