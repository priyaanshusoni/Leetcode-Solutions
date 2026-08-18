/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numberOfSubarrays = function(nums, k) {


   let map = {}
   let cnt = 0
   let sum=0;



   for(let i=0 ; i<nums.length;i++){

    let number = nums[i]%2===0 ? 0 : 1

    sum+=number;

    if(sum===k) cnt++;


    if(map[sum-k]){
        cnt+=map[sum-k];
    }

    
    map[sum] = map[sum] ? map[sum]+=1 : 1



    
      
   }
        

        return cnt;
   


 
};