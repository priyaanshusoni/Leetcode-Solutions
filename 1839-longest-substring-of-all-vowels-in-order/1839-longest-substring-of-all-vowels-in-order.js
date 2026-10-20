/**
 * @param {string} word
 * @return {number}
 */
var longestBeautifulSubstring = function (word) {

    let left = 0;
    let right = 0;
    let max = 0;

    let distinct = 1

    let n = word.length







    for (let right = 1; right < n; right++) {


        let ele = word[right];
        let prevEle = word[right - 1]


        if (ele >= prevEle && ele !== prevEle) distinct++;



        if (ele < prevEle) {
            left = right;
            distinct = 1;

        }

        if (distinct === 5) {
            max = Math.max(max, right - left + 1)
        }











    }



    return max;











};