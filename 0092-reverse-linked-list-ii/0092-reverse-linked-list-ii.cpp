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

ListNode* reverse(ListNode* head){
      ListNode* temp = head;
      ListNode* prev= NULL;
      while(temp!=NULL){
        ListNode* front= temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
      }


      return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head->next==NULL && left==right){
            return head;
        }

        if(left==1 && right==1){
            return head;
        }



        if(left==right){
            return head;
        }
     
        if(left==1){
            ListNode* left = head;
            int count =0;
            ListNode* t1= head;
            while(t1!=NULL){
                count++;
                if(count==right) break;
                t1=t1->next;
            }
            ListNode* rightnode = t1;
            ListNode* nextnode = t1->next;
            rightnode->next=NULL;
            ListNode* New = reverse(head);
            left->next=nextnode;

            return New;


        }

        ListNode* temp = head;

        int cnt=0;
        cnt++;
        
        
        while(temp!=NULL){
            cnt++;
            if(cnt==left) break;
            temp=temp->next;
        }

        ListNode* prevNode = temp;
        ListNode* leftNode = temp->next;

        temp = head;
        cnt=0;

        while(temp!=NULL){
            cnt++;
            if(cnt==right) break;
            temp=temp->next;
        }

        ListNode* rightNode = temp;
        ListNode* nextNode = temp->next;


        rightNode->next=NULL;

        ListNode*newhead = reverse(leftNode);

        prevNode->next=newhead;
        leftNode->next = nextNode;




        return head;
    }
};