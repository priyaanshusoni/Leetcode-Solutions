/**
 * @param {number} n
 * @return {boolean}
 */

function powFour(n ,x ) {

    if (n===x) return true;

    if(x>=n) return false;


    return powFour(n , 4 * x)
}
var isPowerOfFour = function(n) {

    if(n==1) return true



    return powFour(n , 4)
    
};