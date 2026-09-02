/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {


    let map = new Map()


    for (let i=0 ; i<nums.length ; i++){
        let ele = nums[i];


        map.set(ele , ( map.get(ele) ? map.get(ele) +1 : 1))
    }


    let sorted = [...map.entries()].sort((a, b) => b[1] - a[1]);


    
    let ans = sorted.slice(0,k).map((ele)=>ele[0])



    return ans


    
   
};