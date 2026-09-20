/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function (fruits) {

    const map = new Map();

    let n = fruits.length

    let left = 0;

    let right = 0;

    let max = 0;


    for (let right = 0; right < n; right++) {

        let fruitType = fruits[right];

        map.set(fruitType, (map.get(fruitType) || 0) + 1)

        while (map.size > 2) {
            let leftFruitType = fruits[left]


            map.set(leftFruitType, map.get(leftFruitType) - 1);
            if (map.get(leftFruitType) === 0) map.delete(leftFruitType)

            left++

        }

        max = Math.max(max, right - left + 1)






    }


    return max;

};