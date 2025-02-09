/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    // Her functions is an array And I need to return the array of functions 
   return (input) =>  functions.reduceRight((acc,curr)=>{
       // curr is second last element 
        // acc is last element of the functions array
        
        return curr(acc)
     },input)


   
    }

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */