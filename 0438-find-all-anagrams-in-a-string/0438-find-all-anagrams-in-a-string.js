/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */

const isEqual = (obj1, obj2) => {

    const entries1 = Object.entries(obj1);
    const entries2 = Object.entries(obj2);


    entries1.sort((a, b) => a[0].localeCompare(b[0]));
    entries2.sort((a, b) => a[0].localeCompare(b[0]));


    return JSON.stringify(entries1) === JSON.stringify(entries2);
};

var findAnagrams = function (s, p) {



    let map = {};
    let ans = []
    let windowSize = p.length
    for (let char of p) map[char] = map[char] ? map[char] += 1 : 1

    let currMap = s.slice(0, p.length).split('').reduce((acc, curr) => {

        acc[curr] = acc[curr] ? acc[curr] += 1 : 1
        return acc
    }, {})

 


    if (isEqual(map, currMap)) ans.push(0)


    for(let i = windowSize ; i<s.length ; i++ ){
        currMap[s[i]] = currMap[s[i]] ? currMap[s[i]]+=1 : 1 ;

        currMap[s[i-windowSize]]-=1;

        if(currMap[s[i-windowSize]] ===0 ) {
            delete currMap[s[i-windowSize]]
        }

        


        if(isEqual(currMap , map)) ans.push(i-windowSize+1);
    } 










return ans;




};