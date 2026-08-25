/**
 * @param {string} s
 * @param {string} t
 * @return {string}
 */

function isValid(obj1 , obj2){

    let keys1 = Object.keys(obj1);
    let keys2 = Object.keys(obj2);


    for (let key of keys2){
        if((obj1[key] || 0) < obj2[key]) return false;
    }

    return true;

}
var minWindow = function(s, t) {


    let tMap = {}

    for(let char of t){
       tMap[char]= tMap[char] ? tMap[char]+=1 : 1
    }


    let left = 0;
    let sMap ={}
    let minLen = Infinity;
    let start = 0
    

    for (let right=0 ; right < s.length ; right++){
        let char = s[right];
        sMap[char] = sMap[char] ? sMap[char]+=1 : 1



        while(isValid(sMap , tMap)){
      
            if(minLen > right - left +1){
                minLen = right-left+1;
                start = left;
            }

            let leftChar = s[left];
            sMap[leftChar]-=1;
            if(sMap[left]===0) delete sMap[left];
            left++;
        }
       
    }


   if(minLen === Infinity) return ""

    return s.slice(start , start+minLen);




   
    
};