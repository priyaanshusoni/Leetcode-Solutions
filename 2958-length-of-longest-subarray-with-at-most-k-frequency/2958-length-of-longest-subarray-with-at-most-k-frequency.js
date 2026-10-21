/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxSubarrayLength = function (nums, k) {


    let left = 0;

    let n = nums.length



    let map = {};
    let max = 0;



    for (let right = 0; right < n; right++) {

        let ele = nums[right];

        map[ele] = map[ele] ? map[ele] += 1 : 1

        while (map[ele] > k) {
            let leftEle = nums[left];
            map[leftEle] -= 1;
            if (map[leftEle] === 0) delete map[leftEle]
            left++;

        }


        max = Math.max(max, right - left + 1)

    }



    return max;






};