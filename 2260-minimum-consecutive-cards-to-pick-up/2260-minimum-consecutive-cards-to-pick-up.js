/**
 * @param {number[]} cards
 * @return {number}
 */
var minimumCardPickup = function (cards) {







    let map = {}

    let miniDistance = Infinity;


    for (i = 0; i < cards.length; i++) {

        let ele = cards[i];




        if (map[ele] !== undefined) {
            miniDistance = Math.min(miniDistance, i - map[ele] + 1)



        }

        map[ele] = i;

    }


    if (miniDistance === Infinity) return -1;

    return miniDistance;

};