/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB){
            return headA;
        }
        if(headA==NULL || headB==NULL){
            return NULL;
        }

        
        int n1=0;
        int n2=0;
        int d=0;

        ListNode* temp1 = headA;


        while(temp1!=NULL){
             n1++;
             temp1=temp1->next;
        }
        ListNode* temp2 = headB;
        while(temp2!=NULL){
             n2++;
             temp2=temp2->next;
        }





        temp1=headA;
        temp2=headB;


        


       if(n2>n1){
            d = n2-n1;
           while(d--){
            temp2=temp2->next;
           }    
       }
           else if(n1>n2){
                 d = n1-n2;
           while(d--){
            temp1 = temp1->next;
           
           }

           }

          
           while(temp1!=NULL && temp2!=NULL){
              if(temp1==temp2){
                return temp1;
              }

              temp1 = temp1->next;
              temp2=temp2->next;

           }
       



       return NULL;
    }
};