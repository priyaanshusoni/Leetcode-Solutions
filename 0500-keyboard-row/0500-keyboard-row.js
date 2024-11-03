/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function(words) {
    const firstline = "qwertyuiop";
    const secondline = "asdfghjkl";
    const thirdline = "zxcvbnm";

    function isInfirstLine(s){
        
        let arr = s.toLowerCase().split('');
        for(let i=0;i<arr.length;i++){
                if(firstline.includes(arr[i])){
                    continue;
                }
                else{
                    return false;
                }
        }

        return true;
    }
    function isInSecondLine(s){
        
        let arr = s.toLowerCase().split('');
        for(let i=0;i<arr.length;i++){
                if(secondline.includes(arr[i])){
                    continue;
                }
                else{
                    return false;
                }
        }

        return true;
    }
    function isInThirdLine(s){
        
        let arr = s.toLowerCase().split('');
        for(let i=0;i<arr.length;i++){
                if(thirdline.includes(arr[i])){
                    continue;
                }
                else{
                    return false;
                }
        }

        return true;
    }

     const ans = [];
    for(let i=0;i<words.length;i++){
          if(isInfirstLine(words[i]) || isInSecondLine(words[i]) || isInThirdLine(words[i])){
            ans.push(words[i]);
          }
    }

return ans;




};