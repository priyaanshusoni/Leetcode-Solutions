/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var numberOfSubstrings = function (s, k) {

    let left = 0;
    let right = 0;


    let cnt = 0;


    let n = s.length;

    let map = {}


    for (let right = 0; right < n; right++) {

        let ele = s[right];

        map[ele] = map[ele] ? map[ele] += 1 : 1;



        while (map[ele] >= k) {
            cnt += n - right;

            let leftEle = s[left];

            map[leftEle] -= 1;

            if (map[leftEle] === 0) delete map[leftEle];
            left++;
        }

    }

    return cnt;
};