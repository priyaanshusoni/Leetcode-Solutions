/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function(s) {
    // a c b b c a c 

      const string = s.split('')

      
      let map = {'a' : -1 , 'b' : -1 , 'c' : -1 }
      let cnt = 0;

      for(let i=0;i<string.length;i++){
           
           let char = string[i];
           map[char] = i;
           let values = Object.values(map)
     

           
           let min = Math.min(...values)
        

           cnt = cnt + (min + 1)
         
      }

      return cnt;
    
    
};