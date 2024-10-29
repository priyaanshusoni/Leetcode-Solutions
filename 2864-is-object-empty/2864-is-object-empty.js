/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
       if(obj.length==0  && Array.isArray(obj)) return true;
   
       else if(Object.keys(obj).length==0){
     
          return true;
       }

           
       else return false;
};