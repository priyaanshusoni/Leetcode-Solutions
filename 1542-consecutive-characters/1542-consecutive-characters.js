/**
 * @param {string} s
 * @return {number}
 */
var maxPower = function(s) {
      let cnt = 1;
        let maxcnt = 1;
        

        for(let i=1;i<s.length;i++){
         if(s[i-1]==s[i]){
            cnt++;
              maxcnt = Math.max(cnt , maxcnt);
         }
         else{
            cnt=1;
         }
        }


        return maxcnt;
};