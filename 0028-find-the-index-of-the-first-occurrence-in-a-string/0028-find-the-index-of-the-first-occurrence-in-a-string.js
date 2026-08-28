/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (a, b) {

    let left = 0;
    let right = 0;

    let index = -1;

    let start = 0;



    while (left < a.length) {
      


        if (a[left] === b[right]) {
            if(start===left) {
                start = left;
            }
            left++;
            right++;

            if (right === b.length) {
                index = start;
                break;
            }

        }




        else {
            right = 0;
            left = start+1
            start = left
        }



    }

    




        return index;









};