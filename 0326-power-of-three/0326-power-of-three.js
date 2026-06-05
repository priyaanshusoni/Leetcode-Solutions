/**
 * @param {number} n
 * @return {boolean}
 */

 function PowThree (n , x ) {

     
     if (n===x) return true;

     if(x>n) return false;


     return PowThree( n , x  *  3 )
 }


var isPowerOfThree = function(n) {



    
     if(n===1) return true;


    return  PowThree( n , 3)







 
};