/**
 * @param {number[]} code
 * @param {number} k
 * @return {number[]}
 */

/*
    2  
3       4
   
    9



*/
var decrypt = function (code, k) {

    if (k === 0) {
        return new Array(code.length).fill(0)
    }


    let ans = []
    let currSum = 0;

    let n = code.length;

    let start = -1, end = -1;





    if (k > 0) {
        start = 1, end = k; //max (n-1)
    }

    if (k < 0) {
        start = n - Math.abs(k);
        end = n - 1; //last element or index not n (that means out of bound element)
    }


    for (let i = start; i <= end; i++) {
        currSum += code[i]; // it will never be out of bound since first window can be at max n-1

    }


    ans.push(currSum)




    for (let i = 1; i < n; i++) {



        currSum += code[(end + 1) % n];
        currSum -= code[start % n]

        ans.push(currSum)

        start = (start + 1) % n;
        end = (end + 1)%n;

    }




    return ans;





















};