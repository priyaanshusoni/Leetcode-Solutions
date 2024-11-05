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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* temp = list1;
        ListNode * prev = NULL;

        while(temp!=NULL && a > 0){
             a--;

            prev = temp;
            temp=temp->next;
        }

       ListNode  *temp2 = list1;
        ListNode * last = NULL;
        while(temp2!=NULL && b>0){
            b--;
            temp2=temp2->next;
        }

         last = temp2;

        ListNode* l2temp = list2;

        prev->next = list2;


        while(l2temp->next!=NULL){
            l2temp = l2temp->next;
        }

     if(last)   l2temp->next = last->next;


        return list1;




        
    }
};