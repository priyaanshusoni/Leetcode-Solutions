/**
 * @param {string} s
 * @return {boolean}
 */

var isPalindrome = function(s,i,j){
    


    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }

        else{
            return false;
        }
    }


    return true;
}



var validPalindrome = function(s) {
    


let arr = s.split("");

let i=0;
let j = s.length-1;


while(i<=j){
    if(s[i]==s[j]){
        i++;
        j--;
    }


    else{
        if(isPalindrome(s,i+1,j)  || isPalindrome(s,i,j-1)){
            return true;
        }

        return false;
    }

}


return true;



};