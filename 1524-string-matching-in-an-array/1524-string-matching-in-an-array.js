/**
 * @param {string[]} words
 * @return {string[]}
 */
var stringMatching = function(words) {
    
      let ans = new Set()

      for(let i=0;i<words.length;i++){
        for(let j=0;j<words.length;j++){
            if(words[i].includes(words[j]) && words[i]!=words[j]) ans.add(words[j]);
            
        }
      }

      let arr = [];

      ans.forEach((i)=>{
        arr.push(i)
      })


    return arr;
    





};