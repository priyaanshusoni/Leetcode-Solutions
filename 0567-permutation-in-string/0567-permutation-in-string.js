/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */


function isEqual(s1Map, s2Map) {

    //s1Map = { a : 2 , b : 1}
    // s2map =  {i : 1 , b : 1 , c : 1}


    // length of both maps should be same , keys & values should be same for true , else false.
  

    for (const [key, value] of Object.entries(s1Map)) {
        if (s1Map[key] !== s2Map[key]) return false;

    }

    return true;
}






var checkInclusion = function (s1, s2) {


    let s1Map = {};
    let s2Map = {};


    for (let i = 0; i < s1.length; i++) {
        let char = s1[i];

        s1Map[char] = s1Map[char] ? s1Map[char] += 1 : 1
    }



    for (let i = 0; i < s2.length; i++) {

        let char = s2[i];
       s2Map[char]= s2Map[char] ? s2Map[char] += 1 : 1

        let charToRemove = s2[i - s1.length]


        if (s2Map[charToRemove]) {
            s2Map[charToRemove] -= 1;
            if (s2Map[charToRemove] === 0) delete s2Map[charToRemove]
        }

        if (isEqual(s1Map, s2Map)) return true;



    }


    return false;








};