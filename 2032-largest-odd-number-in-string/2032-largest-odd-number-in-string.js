/**
 * @param {string} num
 * @return {string}




 */



function odd(num){
for(let i=num.length-1;i>=0;i--){
    if(parseInt(num[i])%2==0){
        return num.slice(0,-1);
    }
}

return num;
 }











var largestOddNumber = function(num) {
    


while(parseInt(num[num.length-1])%2==0){
    num = odd(num)
}

if(!num){
    return "";
}

return num;












};