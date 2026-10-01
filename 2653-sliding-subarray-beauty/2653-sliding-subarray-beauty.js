/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} x
 * @return {number[]}
 */

const findBeauty = (map, x) => {
    let beauty = 0

    for (let i = 0; i < 50; i++) {
        beauty += map[i];
        if (beauty >= x) return i - 50;
    }

    return 0;

}
var getSubarrayBeauty = function (nums, k, x) {

    let n = nums.length


    let map = new Array(101).fill(0);


    let ans = [];



    // first calculate the beauty of first window


    for (let i = 0; i < k; i++) {
        map[nums[i] + 50]++;

    }

    //beauty of the first window

    ans.push(findBeauty(map, x))


    for (let i = k; i < n; i++) {
        map[nums[i - k] + 50] -= 1;

        map[nums[i] + 50]++;

        ans.push(findBeauty(map, x))


    }






    return ans;



};