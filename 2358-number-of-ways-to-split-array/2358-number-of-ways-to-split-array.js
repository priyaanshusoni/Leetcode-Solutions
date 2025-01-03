/**
 * @param {number[]} nums
 * @return {number}
 */
var waysToSplitArray = function(nums) {
    //Problem can be Solved USing Prefix Sum 

    // Nums = [10 , 4 , -8 , 7 ]
    let noOfways =0;
    let prefixSum = [];
       let temp=0;
    for(let i=0;i<nums.length;i++){
      temp+=nums[i];

      prefixSum[i] = temp;
    }

   //PrefixSum = [ 10, 14, 6, 13 ]

   for(let i=0;i<nums.length-1;i++){
    if(prefixSum[i] >= (prefixSum[nums.length-1]- prefixSum[i])){
        noOfways++;
    }
   }

   return noOfways;

};