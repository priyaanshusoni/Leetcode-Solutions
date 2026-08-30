/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (a, b) {

    
    


    let ws = b.length;

    if(ws > a.length) return -1;

    for(let i=0 ; i<=a.length-ws ; i++){
        let str = a.slice(i , i+ws);

        if(str===b) return i;

    }


    return -1;

    













};