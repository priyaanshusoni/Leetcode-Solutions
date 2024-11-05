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
        ListNode * last = NULL;
        int cnt1 = 0;
        int cnt2=0;
        while(temp!=NULL){
            cnt1++;
            cnt2++;

            if(cnt1==a){
              prev=temp;
            }

            if(cnt2==b+1){
                last = temp;
            }
            temp=temp->next;
        }

         

    //    ListNode  *temp2 = list1;
      
    //     while(temp2!=NULL && b>0){
    //         b--;
    //         temp2=temp2->next;
    //     }

        

        ListNode* l2temp = list2;

        prev->next = list2;


        while(l2temp->next!=NULL){
            l2temp = l2temp->next;
        }

     if(last)   l2temp->next = last->next;


        return list1;




        
    }
};