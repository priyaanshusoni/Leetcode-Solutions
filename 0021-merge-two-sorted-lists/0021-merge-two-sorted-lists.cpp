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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*t1 = list1;
        ListNode*t2= list2;

        ListNode*dummynode = new ListNode(-1);
         ListNode* res = dummynode;

        while(t1!=NULL && t2!=NULL){
            if(t1->val < t2->val){
                res->next=t1;
                res=res->next;
                t1=t1->next;

            }

            else if(t1->val > t2->val){
                res->next=t2;
                res=res->next;
                t2=t2->next;
            }

            else{
                 res->next=t2;
                 res=res->next;
                 t2=t2->next;
            }
        }

        if(t1){
                            res->next=t1;
        }

        if(t2){
               res->next=t2;
        }


        return dummynode->next;
    }
};