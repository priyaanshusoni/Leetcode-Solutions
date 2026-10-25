/**
 * @param {number[]} colors
 * @param {number} k
 * @return {number}
 */
var numberOfAlternatingGroups = function (colors, k) {



    let left = 0;
    let right = 1;

    let cnt = 0;


    for (let i = 0; i < k-1; i++) {
        colors.push(colors[i])
    }

    let n = colors.length;


    while (right < n) {


        if (colors[right] === colors[right - 1]) {
            left = right;
        }

        if (right - left + 1 === k) {
            left = left + 1;
            cnt++;
        }



        right++;
    }



    return cnt;



};