/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function(s, k) {


    let map = {}

    let maxFreq = 0;

    let left = 0;

    let ans = 0


    for(let right = 0 ; right < s.length ; right++){
        let char = s[right];
        let windowSize = right - left + 1

        map[char] = map[char] ? map[char]+=1 : 1


        maxFreq = Math.max(maxFreq , map[char]);


        if(windowSize - maxFreq > k){
            leftPointerChar = s[left]


            map[leftPointerChar] = map[leftPointerChar] - 1;
            left++;
     
        }

         ans = Math.max(ans , right - left + 1 )

       





    }

    return ans;
    
};