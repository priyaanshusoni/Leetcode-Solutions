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


    
    ListNode* head = new ListNode(ans[0]);
    ListNode* temp = head;

    for(int i=1;i<ans.size();i++){
        ListNode* newnode = new ListNode(ans[i]);
        temp->next = newnode;
        temp=newnode;
    }


    return head;
}


    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       ListNode* temp = head;
       vector<int>ans;
       vector<int>LL;
       set<int>st;


       for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
       }


       while(temp!=NULL){
       
            LL.push_back(temp->val);
            temp=temp->next;

        }

        for(int i=0;i<LL.size();i++){
            if(st.find(LL[i])==st.end()){
                ans.push_back(LL[i]);
            }

            else{
                continue;
            }
        }


        ListNode* newHead = convert2LL(ans);


        return newHead;
       
    }
};