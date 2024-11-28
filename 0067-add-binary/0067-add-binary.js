/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    let num1= a.split("").reverse().join("");
    let num2= b.split("").reverse().join("");

    let i=0;
    let j=0;
    let carry = 0;
    let ans="";

    while(i<num1.length && j<num2.length){
        let digit1 = parseInt(num1[i]);
        let digit2 = parseInt(num2[j]);

        let sum = digit1 + digit2 + carry;
        if(sum>1){
            carry=1;
            
            ans+=sum%2;
            i++;
            j++;

        }
        else{
            carry=0;
            ans+=sum%2;
            i++;
            j++;
        }
    }


    while(i<num1.length){
        let sum = carry + parseInt(num1[i]);
        if(sum>1){
           ans+=sum%2;
           i++;
           carry=1;
        }
        else{
           ans+=sum%2;
           i++;
           carry=0;
        }
    }
    while(j<num2.length){
        let sum = carry + parseInt(num2[j]);
        if(sum>1){
           ans+=sum%2;
           j++;
           carry=1;
        }
        else{
           ans+=sum%2;
           j++;
           carry=0;
        }
    }
    

    if(carry){
        ans+=carry;
    }


    return ans.split("").reverse().join("");



};