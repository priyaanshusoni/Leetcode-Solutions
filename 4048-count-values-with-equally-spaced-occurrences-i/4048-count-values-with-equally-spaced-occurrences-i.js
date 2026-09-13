/**
 * @param {number[]} nums
 * @return {number}
 */
var isSpecial = (ele, nums) => {
    let index = [];

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === ele) index.push(i)
    }



    return (index[1] - index[0] === index[2] - index[1]);
}
var countSpecialIntegers = function (nums) {

    const onlyThree = new Set();
    const disQualified = new Set();

    let map = {};

    let cnt = 0;


    for (let i = 0; i < nums.length; i++) {
        let ele = nums[i];
        map[ele] = map[ele] ? map[ele] += 1 : 1;

        if (map[ele] === 3 && !disQualified.has(ele)) {
            onlyThree.add(ele)
        }

        if (map[ele] > 3) {
            disQualified.add(ele);
            onlyThree.delete(ele)
        }
    }



    for (const val of onlyThree) {
        if (isSpecial(val, nums)) cnt++;
    }




    return cnt;









};