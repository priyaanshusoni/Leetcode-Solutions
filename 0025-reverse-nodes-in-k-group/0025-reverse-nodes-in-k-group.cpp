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
  ListNode* findkthNode(ListNode* temp,int k){
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;

        temp=temp->next;
    }




    return temp;
  }


  ListNode* reverse(ListNode* head){
      ListNode* temp = head;

      ListNode*prev = NULL;

      while(temp!=NULL){
        ListNode*front = temp->next;

        temp->next=prev;
        prev=temp;
        temp=front;
      }


      return prev;
  }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode*prevNode = NULL;
        ListNode* nextNode = NULL;
        while(temp!=NULL){
            ListNode*kthNode = findkthNode(temp,k);


            if(kthNode==NULL){

     if(prevNode)prevNode->next=temp;

                break;
            }

            nextNode=kthNode->next;
            kthNode->next=NULL;

            reverse(temp);

            if(temp==head){
                head=kthNode;
            }

            else{
                 prevNode->next=kthNode;
            }

            prevNode=temp;
            temp=nextNode;


        }


        return head;



    }
};