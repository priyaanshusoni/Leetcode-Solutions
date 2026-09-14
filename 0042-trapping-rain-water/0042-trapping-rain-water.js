/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {



    let ans = 0;


    let prefix = [];

    let suffix = [];

    let prefixMax = height[0];
    prefix[0] = prefixMax;
    let suffixMax = height[height.length - 1];
    suffix[height.length - 1] = suffixMax



    for (let i = 1; i < height.length; i++) {

        prefixMax = Math.max(prefixMax, height[i])
        prefix[i] = prefixMax;

    }


    for (let i = height.length - 2; i >= 0; i--) {

        suffixMax = Math.max(suffixMax, height[i])
        suffix[i] = suffixMax;

    }





    for (let i = 0; i < height.length; i++) {

        let maxLeft = prefix[i];
        let maxRight = suffix[i]

        let trappedWater = Math.min(maxLeft, maxRight) - height[i];

        ans += trappedWater
    }


    return ans;

};