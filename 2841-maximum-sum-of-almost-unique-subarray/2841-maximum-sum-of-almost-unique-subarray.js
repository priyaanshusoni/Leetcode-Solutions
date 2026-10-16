/**
 * @param {number[]} nums
 * @param {number} m
 * @param {number} k
 * @return {number}
 */
var maxSum = function (nums, m, k) {


    let n = nums.length;


    let max = 0;


    let currSum = 0;


    let map = new Map()






    for (let i = 0; i < k; i++) {

        let ele = nums[i];

        map.set(ele, (map.get(ele) || 0) + 1)


        currSum += nums[i];



    }

    if (map.size >= m) max = currSum;



    for (let i = k; i < n; i++) {


        

        let ele = nums[i];
        let eleToRemove = nums[i - k];

        currSum += ele;

        currSum -= eleToRemove;

        map.set(ele, (map.get(ele) || 0) + 1)


        map.set(eleToRemove, map.get(eleToRemove) - 1)

        

        if (map.get(eleToRemove) === 0) {
            map.delete(eleToRemove)
        }



        if (map.size >= m) {
            max = Math.max(max, currSum)

        }





    }

    return max;



};