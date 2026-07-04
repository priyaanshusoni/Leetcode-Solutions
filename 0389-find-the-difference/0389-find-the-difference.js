/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function (s, t) {




    let map = new Map()

    for (let i = 0; i < t.length; i++) {
        if (map.has(t[i])) {
            map.set(t[i], (map.get(t[i]) || 0) + 1)
        }

        else {
            map.set(t[i], 1)
        }




     


    }



    for (const value of s) {
           if (map.has(value)) {
            map.set(value, (map.get(value) - 1))
        }
    }




    for (const [key, value] of map) {
       
        if (value === 1) return String(key)
    }










};