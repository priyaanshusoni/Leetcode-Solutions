/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {

    let str1 = s.split('');
    let str2 = t.split('');

    str1.sort();
    str2.sort();


    if(str1.length != str2.length) return false;


    for(let i=0;i<str1.length;i++){
        if(str1[i]==str2[i]) continue;

        else return false;
    }


    return true;
};