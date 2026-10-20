/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumUniqueSubarray = function (nums) {



    let map = {};


    let left = 0;
    let right = 0;

    let n = nums.length

    let max = 0;


    let currSum = 0;

    for (let i = 0; i < n; i++) {





        let ele = nums[i];

        currSum += ele

        map[ele] = map[ele] ? map[ele] += 1 : 1;

        while (map[ele] > 1) {
            let leftEle = nums[left];
            currSum -= leftEle
            map[leftEle] -= 1;
            left++;
        }





        max = Math.max(currSum, max)




    }


    return max;

};