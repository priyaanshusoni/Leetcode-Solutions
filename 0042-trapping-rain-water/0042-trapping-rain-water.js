/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {



    let ans = 0;

    let n = height.length


    let prefix = [];

    let suffix = [];

    let prefixMax = height[0];

    let suffixMax = height[n - 1];

    let left = 0;
    let right = n - 1;

    while (left < n && right >= 0) {
        if (left > 0) prefixMax = Math.max(prefixMax, height[left]);
        if (right < n - 1) suffixMax = Math.max(suffixMax, height[right]);
        prefix[left] = prefixMax;
        suffix[right] = suffixMax;

        left++;
        right--;


    }


    console.log(prefix)
    console.log(suffix)







    for (let i = 0; i < n; i++) {

        let maxLeft = prefix[i];
        let maxRight = suffix[i]

        let trappedWater = Math.min(maxLeft, maxRight) - height[i];

        ans += trappedWater
    }


    return ans;

};