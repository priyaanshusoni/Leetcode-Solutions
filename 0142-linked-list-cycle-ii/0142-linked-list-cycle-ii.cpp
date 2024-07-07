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
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;

        ListNode * fast = head;
        
        ListNode * temp = head;
        
        while(fast!=NULL && fast->next!=NULL){
           
  // step 1 Detecting a Loop
          


              slow = slow->next;
 
              fast = fast->next->next;

           if(slow==fast){
                    slow = head;
                while(slow!=fast){
                    slow = slow->next;

                    fast = fast->next;

                }


                return slow;



           }






           
            
            
          
            
            
        }
        
        
        
        
        return NULL;
    }
};