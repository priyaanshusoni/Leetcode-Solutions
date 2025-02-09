/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
   
    let i=0;

    let ans = [];

    while(i<arr.length){
        let cnt= size;
        let temp = [];

        while(cnt-- && i<arr.length){
            temp.push(arr[i]);
            i++;
        }
        ans.push(temp)
    }
            




return ans;



};
