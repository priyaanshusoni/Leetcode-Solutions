/**
 * @param {number[]} colors
 * @return {number}
 */
var numberOfAlternatingGroups = function (colors) {

    let n = colors.length;


    let cnt = 0;


    for (let i = 0; i < n; i++) {

        let curr = colors[i]
        let prev = colors[(i - 1 + n) % n]

        let next = colors[(i + 1) % n]


        if (prev !== curr && next !== curr) cnt++;



    }

    return cnt;




};