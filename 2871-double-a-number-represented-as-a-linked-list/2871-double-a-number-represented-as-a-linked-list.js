/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */



 function createLL(doubledarr){
    const head = new ListNode(parseInt(doubledarr[0]));

    let temp = head;

    for(let i=1;i<doubledarr.length;i++){
        let newnode = new ListNode(parseInt(doubledarr[i]));
        temp.next = newnode;
        temp=newnode;
    }

    return head;
 }
var doubleIt = function(head) {
    let temp = head;
    let str = "";

    while(temp!=null){
         str+=temp.val;
         temp=temp.next;
    }

    

    let newstr = (BigInt(str) *2n).toString();

    let doubledarr = newstr.split('');

    // console.log(doubledarr);

   const newhead = createLL(doubledarr);

   return newhead;

};