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
    vector<int> nextLargerNodes(ListNode* head) {
          ListNode* temp = head;
        vector<int>ans;
        vector<int>convert;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        
        bool isLarger;
        
        for(int i=0;i<ans.size();i++){
            isLarger = true;
            for(int j=i+1;j<ans.size();j++){
                if(ans[j]>ans[i]){
                    convert.push_back(ans[j]);
                    isLarger = false;
                    break;
                } 
            }

            if(isLarger){
                    convert.push_back(0);
                }
            
        }
        
        
        
        
        
        return convert;
    }
};