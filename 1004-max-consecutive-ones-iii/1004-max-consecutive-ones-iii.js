/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {


      let left = 0;
     

      let noOfZeros = 0; 


      let maxcnt = 0


      for(let right = 0 ; right < nums.length ; right++){

         if(nums[right]===0) noOfZeros++;

         while(noOfZeros > k) {
                if(nums[left]===0) noOfZeros--;
                left++;
         }



         maxcnt = Math.max(maxcnt , right - left + 1 ) 



      }


      return maxcnt;


    
};