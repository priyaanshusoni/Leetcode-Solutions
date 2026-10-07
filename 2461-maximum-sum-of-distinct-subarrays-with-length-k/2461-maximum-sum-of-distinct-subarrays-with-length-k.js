/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maximumSubarraySum = function (nums, k) {


    let n = nums.length;

    let currSum = 0;
    let max = 0;
    let map = new Map();





    for (let i = 0; i < k; i++) {
        let ele = nums[i];
        map.set(ele, (map.get(ele) || 0) + 1)
        currSum += ele;

    }



    if (map.size === k) max = Math.max(currSum, max)



    for (let i = k; i < nums.length; i++) {
        let currEle = nums[i];
        let eleToRemove = nums[i - k];


        currSum += currEle;
        currSum -= eleToRemove;


        map.set(currEle, (map.get(currEle) || 0) + 1)
        map.set(eleToRemove, (map.get(eleToRemove)) - 1)


        if (map.get(eleToRemove) === 0) map.delete(eleToRemove)





        if (map.size === k) max = Math.max(currSum, max)
    }


    return max;






};


//1,5,4,2,9,9,9 ,8 7 