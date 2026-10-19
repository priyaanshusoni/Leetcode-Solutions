/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countSubarrays = function (nums, k) {



    let maximumEle = -1;

    let n = nums.length;

    let cnt = 0;

    let left = 0;
    let right = 0;

    let map = {}


    for (let i = 0; i < n; i++) {
        maximumEle = Math.max(maximumEle, nums[i])

    }

    for (right = 0; right < n; right++) {
        let ele = nums[right];
        map[ele] = map[ele] ? map[ele] += 1 : 1


        while (map[maximumEle] >= k) {
            cnt = cnt + n - right;
            let leftEle = nums[left];
            map[leftEle] -= 1;
            if (map[leftEle] === 0) delete map[leftEle];
            left += 1;

        }

    }









    return cnt;





};