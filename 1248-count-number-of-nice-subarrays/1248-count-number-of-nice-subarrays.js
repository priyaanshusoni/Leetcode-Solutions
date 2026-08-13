/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numberOfSubarrays = function(nums, k) {

    let array = nums.map((num)=> num%2==0 ? 0 : 1)




    let sum = 0;


    let map = {};

    let cnt = 0;


    for(let i=0 ; i<array.length ; i++){
        sum+=array[i];

        if(sum===k) cnt++;

        if(map[sum-k]){
            cnt+=map[sum-k]
        }



        
        map[sum] = map[sum] ? map[sum]+=1 : 1
    }


    return cnt;

 
};