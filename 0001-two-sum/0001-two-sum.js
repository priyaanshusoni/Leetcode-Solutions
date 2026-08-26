/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {


    const map = {};

    for (let i = 0; i < nums.length; i++) {



        let curr = nums[i];
        let key = `${target - curr}`

      

        if (map[key]!=undefined) {

            return [i, map[key]]
        }

        map[curr] = i

     

    }
};