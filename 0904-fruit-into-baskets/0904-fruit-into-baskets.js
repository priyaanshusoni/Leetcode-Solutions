/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {


    let map = {}

    let left =0;
    let right = 0;

    let maxcnt = 0

    for (let right=0 ; right < fruits.length ; right++) {

        let type = fruits[right]

        map[type] = map[type] ? map[type]+=1 : 1

        while(Object.keys(map).length>2){
            
             
             map[fruits[left]]-=1;

             if(map[fruits[left]]===0) delete map[fruits[left]]
             left++
        }



          maxcnt = Math.max(maxcnt , right - left + 1 )
    }


    return maxcnt;
    
};