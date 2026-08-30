/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {


    let noOfZeros = 0;

    let maxcnt =0;

    let left = 0;

    let right = 0;



    for(let right=0 ; right<nums.length ; right++){


        let curr = nums[right];

        if(curr===0 ) noOfZeros++;


        while(noOfZeros>k){
            let leftNumber = nums[left];
            if(leftNumber===0) {
                noOfZeros--;
            }
            left = left+1;
        }





        maxcnt = Math.max(right-left+1 , maxcnt)

    }


    return maxcnt;



    
};