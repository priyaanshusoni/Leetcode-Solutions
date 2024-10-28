/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {

     let sortedStrs = strs.sort();

      let string1 = sortedStrs[0].split('');
      let string2 = sortedStrs[strs.length-1].split('');
    //   console.log(string1 + string1.length);
    //   console.log(string2 + string2.length);

     let i=0;
     let j=0;
     let ans="";

     while(i<string1.length && j<string2.length){
        if(string1[i]==string2[j]){
           ans+=string1[i];
           i++;
           j++;
        }
        else{
            break;
        }
     }

    


     return ans;

    



};