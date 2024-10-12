/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function(s) {
    
        let cnt=0;
        let maxcnt=0;

        for(let i=0;i<s.length;i++){
            if(s[i]=='('){
                cnt++;
               if(cnt>maxcnt){
                maxcnt = cnt;
               }
            }
            if(s[i]==')'){
                cnt--;
            }
        }


        return maxcnt;
};