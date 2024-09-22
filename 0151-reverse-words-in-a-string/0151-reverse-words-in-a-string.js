/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    const arr = [];
    

    const a = s.split(" ");

    for(let i=0;i<a.length;i++){
        if(a[i]!=""){
            arr.push(a[i]);
        }
    }

   

    const ans = arr.reverse().join(' ');


    return ans;

};