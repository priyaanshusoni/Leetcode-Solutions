/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function (nums, k) {

    let currSum = nums.slice(0,k).reduce((a,b)=>a+b , 0)
    let maxSum=currSum;

    

       

       for (let i=k;i<nums.length ; i++){

          currSum +=nums[i];
          currSum-=nums[i-k];
          maxSum = Math.max(currSum , maxSum);

              
       }

   


    return maxSum / k

};