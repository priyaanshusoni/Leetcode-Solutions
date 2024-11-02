/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 */
var Solution = function(head) {
   this.head = head;
};

/**
 * @return {number}
 */
Solution.prototype.getRandom = function() {

  
    let head = this.head;
    let temp = head;
    let n =0;
    while(temp!=null){
        n++;
       
        temp=temp.next;
    }

    let getrandomNode = Math.floor((Math.random() * n) + 1);
    console.log(getrandomNode);
     
    let temp2 = head;

    while(temp2!=null && getrandomNode > 0){
        getrandomNode--;
        if(getrandomNode==0) break;

        temp2 = temp2.next;


    }

    return temp2.val;

};

/** 
 * Your Solution object will be instantiated and called as such:
 * var obj = new Solution(head)
 * var param_1 = obj.getRandom()
 */