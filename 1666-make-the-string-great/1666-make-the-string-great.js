/**
 * @param {string} s
 * @return {string}
 */
var makeGood = function(s) {
    s = s.split("")
    let i =0;
    let j=0;
  while(i<s.length-1){

      for(let j=i+1;j<s.length;j++){
      if(s[i]!=s[j]){
        let a = s[i].toLowerCase();
        let b = s[j].toLowerCase();

        if(a==b){
            s.splice(i,2);
            
            i=0;

            break;

        }
        else{
            i++;
            break;
        }
      }
      else{
        i++;
        break;
      }
  }
  }


  return s.join("");
};