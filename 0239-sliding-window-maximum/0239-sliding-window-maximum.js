/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var maxSlidingWindow = function (nums, k) {



    let dq = [];

    let n = nums.length;

    let ans = [];

    for (let i = 0; i < k; i++) {



        while (dq.length && nums[i] >= nums[dq[dq.length - 1]]) {
            dq.pop()
        }




       dq.push(i)

    }


    for(let i=k; i<n;i++){

        //put the first element at deque to ans 
        ans.push(nums[dq[0]])


        // remove the elemments which are out of the current window

        while(dq.length &&  dq[0] <= i-k) {
            dq.shift();
        }


        // maintain max element at front of dequeue 
        while(dq.length && nums[i]>=nums[dq[dq.length-1]]){
            dq.pop()

        }

        dq.push(i)

    }


    ans.push(nums[dq[0]]); //push the largest element of the last window


    return ans;








};