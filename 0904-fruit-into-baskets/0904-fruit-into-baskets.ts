function totalFruit(fruits: number[]): number {


    // longest contigous sub array with exactly two contigous elements 


    let left = 0;


    let max = 0;


    let n = fruits.length


    let map = {}


    for (let right = 0; right < n; right++) {
        let fruit = fruits[right];

        map[fruit] = map[fruit] ? map[fruit] += 1 : 1;


        if (Object.keys(map).length > 2) {
            let leftFruit = fruits[left];
            map[leftFruit] -= 1;
            if (map[leftFruit] === 0) delete map[leftFruit];

            left++;
        }

        if (Object.keys(map).length <= 2) {

            max = Math.max(right - left + 1, max)

        }







    }


    return max;

};