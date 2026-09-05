/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {

    let ans = [];

    nums.sort((a,b)=>a-b)

  

    for(let i=0 ; i<nums.length ; i++){
        if(i > 0 &&  nums[i]===nums[i-1]) continue;
          let set = new Set()
        for(let j=i+1; j<nums.length ; j++){

            let first = nums[i];
            let second = nums[j];

            let third = -(first + second)

            if(set.has(third)){
                ans.push([first , second , third ])
                while(nums[j+1]===nums[j]) j++;
            }

            set.add(second);

        }
    }


    return ans;
    
};