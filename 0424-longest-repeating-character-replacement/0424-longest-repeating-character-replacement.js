/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function (s, k) {

    let n = s.length;

    let left = 0;

    let map = {};


    let maxlen = 0;

    let maxFreq = 0;


    for (let right = 0; right < n; right++) {

        let char = s[right];



        map[char] = map[char] ? map[char] + 1 : 1


        maxFreq = Math.max(maxFreq, map[char])



        while ((right - left + 1) - maxFreq > k) {
            let leftChar = s[left];
            map[leftChar] -= 1;
            if (map[leftChar] === 0) delete map[leftChar]
            left++;

        }


        maxlen = Math.max(maxlen, right - left + 1)



    }


    return maxlen;

};