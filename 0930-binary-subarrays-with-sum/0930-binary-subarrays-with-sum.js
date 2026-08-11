/**
 * @param {number[]} nums
 * @param {number} goal
 * @return {number}
 */
var numSubarraysWithSum = function(nums, goal) {

     
     let map = {}

     let sum = 0;

     let cnt = 0;

     for(let i =0 ; i<nums.length ; i++) {

        sum+=nums[i];

        if(sum===goal) cnt++;


        if(map[sum-goal]){
            cnt+=map[sum-goal]
        }




        map[sum] = map[sum] ? map[sum]+=1 : 1
        
     }


     return cnt;




    
};