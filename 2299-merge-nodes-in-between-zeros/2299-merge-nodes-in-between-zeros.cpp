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
ListNode* convert2LL(vector<int>& arr){
    ListNode * head = new ListNode(arr[0]);

    ListNode* temp = head;

    for(int i=1;i<arr.size();i++){
        ListNode* newnode = new ListNode(arr[i]);
        temp->next = newnode;
        temp = newnode;
    }

    return head;



}
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode *temp = head->next;
        // vector<int>mergedLL;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
        while(temp!=NULL){
            ListNode * end = temp;
            int sum=0;
            while(end->val !=0){
             sum+=end->val;
             temp=temp->next;
             end=temp;
            }
            // mergedLL.push_back(sum);
            ListNode * newnode = new ListNode(sum);
            curr->next = newnode;
            curr = newnode;
            temp=temp->next;
           

            
        }

        // head = convert2LL(mergedLL);


        return dummyNode->next;
        
    }
};