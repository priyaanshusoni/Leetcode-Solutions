/**
 * @param {string} s
 * @return {string}
 */
var makeGood = function(s) {
    s = s.split("")
    let i=0;
   while(i<s.length-1){
     if(s[i]!=s[i+1]){
        let a  = s[i].toLowerCase();
        let b = s[i+1].toLowerCase();

        if(a==b){
            s.splice(i,2);
            i=0;
        }

        else{
           i++;
        }
     }

     else{
        i++;
     }
   }
  

  return s.join("");
};