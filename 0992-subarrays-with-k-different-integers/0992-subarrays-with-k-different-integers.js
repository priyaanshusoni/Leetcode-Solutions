/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

const atMostK = (nums , k)=> {

    
    let map = new Map()

    let left = 0

    let cnt = 0

    


    for(let right = 0 ; right < nums.length ; right ++){

        let number = nums[right]
        map.set(number , (map.get(number) || 0 ) +1)



        while(map.size > k) {

            let leftNumber = nums[left];
            map.set(leftNumber , map.get(leftNumber)-1);

            if(map.get(leftNumber)===0) map.delete(leftNumber);
            left++
        }




        cnt = cnt + right - left + 1;




    }

    return cnt;
}
var subarraysWithKDistinct = function(nums, k) {



   // Exactly K = AtMostK - AtMost K-1 

    return atMostK(nums , k) - atMostK(nums , k-1)



 
    
};