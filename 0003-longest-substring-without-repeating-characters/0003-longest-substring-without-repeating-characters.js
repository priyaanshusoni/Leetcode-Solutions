/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {

  let window = {}

  let l =0 ,r = 0;

  let maxcnt=0;

   

   while (r < s.length){

     
     window[s[r]] = (window[s[r]] || 0) + 1;

     

     while(window[s[r]] > 1 ) {
        window[s[l]]-=1;
        l = l+1
     }
     maxcnt = Math.max(maxcnt , r - l + 1 )
     r = r + 1;

     
   }

   return maxcnt;

    
};