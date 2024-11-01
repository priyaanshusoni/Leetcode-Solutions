/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    const arr = word.split('');
    function alllowercase(s){
        for(let i=1;i<s.length;i++){
            if(s[i]<='z' && s[i]>='a'){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
    function firstuppercase(s){
       if((arr[0]<='Z' && arr[0]>='A') && alllowercase(s) ){
             return true;
       }

       else{
        return false;
       }
    }

    function alluppercase(s){
        for(let i=0;i<s.length;i++){
            if(s[i]<='Z' && s[i]>='A') continue;
            else return false;
        }

        return true;
    }




    if( alluppercase(arr) || alllowercase(arr) || firstuppercase(arr)){
        return true;
    }
    else{
        return false;
    }
};