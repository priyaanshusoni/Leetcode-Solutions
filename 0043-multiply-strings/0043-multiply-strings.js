/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function(num1, num2) {
    const a = BigInt(num1);
    const b = BigInt(num2);
    
    const value = a*b;
   
    
    return value.toString();
};