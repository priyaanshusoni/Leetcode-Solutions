/**
 * @param {number} n
 * @return {string[]}
 */

function generate(ans,n,string,left,right){
if(n==left && n==right){
    ans.push(string);
    return;
}

if(left<n) {
    
    generate(ans , n,string+"(",left+1,right);
}
if(right<left){
     
    generate(ans , n,string+")",left,right+1);
}



}
var generateParenthesis = function(n) {
    let string = "";
    let ans = [];


    generate(ans,n,string,0,0);


    return ans;
};