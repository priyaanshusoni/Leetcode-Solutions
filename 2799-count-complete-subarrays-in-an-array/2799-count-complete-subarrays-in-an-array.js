/**
 * @param {number[]} nums
 * @return {number}
 */
var countCompleteSubarrays = function (nums) {

    // number of subarrays with k distinict elements

    let st = new Set();

    let left = 0;
    let right = 0;

    let n = nums.length;


    for (const ele of nums) {
        st.add(ele)
    }

    let k = st.size;

    let map = new Map();

    let cnt = 0;


    for (right = 0; right < n; right++) {

        let ele = nums[right];

        map[ele] = map[ele] ? map[ele] += 1 : 1;


        while (Object.keys(map).length === k) {
            cnt += n - right;
            let leftEle = nums[left]
            map[leftEle] -= 1;
            if (map[leftEle] === 0) delete map[leftEle];
            left++;

        }



    }


    return cnt;









};