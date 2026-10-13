/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
const isVowel = (char) => {
    if (char === 'a' || char === 'e' || char === 'i' || char === 'o' || char === 'u') return true;

    return false;
}
var maxVowels = function (s, k) {


    //1. Fixed size of window
    //2. maintain the number of vowels  /  a e i o u 

    let n = s.length

    let vowelCnt = 0;

    let max = 0;



    for (let i = 0; i < k; i++) {

        let char = s[i];

        if (isVowel(char)) vowelCnt++;
        max = Math.max(max, vowelCnt)



    }


    for(let i=k ; i<n;i++) {
        let char = s[i];

        let charToRemove = s[i-k];


        if(isVowel(char)) vowelCnt++;

        if(isVowel(charToRemove)) vowelCnt--;


        max = Math.max(max , vowelCnt);

        
    }

    return max;




};