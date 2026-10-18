/**
 * @param {number[]} cards
 * @return {number}
 */
var minimumCardPickup = function (cards) {




    let left = 0;
    let right = 0;

    let map = {}

    let mini = Infinity;


    for (right = 0; right < cards.length; right++) {
        let ele = cards[right];



        map[ele] = map[ele] ? map[ele] += 1 : 1;

        while (map[ele] === 2) {


            mini = Math.min(mini, right - left + 1);


            let leftEle = cards[left];
            map[leftEle] -= 1;
            if(map[leftEle]===0) delete map[leftEle]

            left++;


        }

    }


    if (mini === Infinity) return -1;

    return mini;

};