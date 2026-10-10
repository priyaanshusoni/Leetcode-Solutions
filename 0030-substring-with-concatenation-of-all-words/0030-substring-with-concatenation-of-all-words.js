/**
 * @param {string} s
 * @param {string[]} words
 * @return {number[]}
 */

const isEqual = (map1, map2) => {

    let map1Keys = Object.keys(map1) // ['foo' , 'bar' , ....]


    for (let i = 0; i < map1Keys.length; i++) {

        let key = map1Keys[i]; // 'foo'


        if (map1[key] !== map2[key]) return false; // 
    }




    return true;
}
var findSubstring = function (s, words) {

    if (words.length === 0) return []

    let n = s.length

    let ans = []

    let wordLen = words[0].length


    let windowLen = words.length * wordLen;


    let wordsMap = {}


    for (let i = 0; i < words.length; i++) {
        let str = words[i];

        wordsMap[str] = wordsMap[str] ? wordsMap[str] += 1 : 1

    }





    for (let i = 0; i <= n - windowLen; i++) {
        let index = i

        let str = s.slice(i, i + windowLen);

        let strMap = {}

        for (let j = 0; j < windowLen; j += wordLen) {

            let piece = str.slice(j, j + wordLen);

            strMap[piece] = strMap[piece] ? strMap[piece] += 1 : 1
        }


        if (isEqual(wordsMap, strMap)) ans.push(i)







    }

    return ans;




};