/**
 * @param {number} num
 * @param {number} k
 * @return {number}
 */
var divisorSubstrings = function (num, k) {


    let nums = `${num}`
    let ws = k;

    let n = nums.length

    let beauty = 0;


   

    for (let i = 0; i <=n-ws ; i++) {
        let ele = Number(nums.slice(i , ws+i));

        
         if(num%ele===0) beauty++;


    }


    return beauty;
};