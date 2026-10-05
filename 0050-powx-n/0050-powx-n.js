/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */


const getPow = (x, n) => {

    // 2^-3 ===> 1/2

    let N = n



    if (N === 0) return 1;


    let half = getPow(x, Math.floor(N / 2));



    return N % 2 === 0 ? half * half : half * half * x



}
var myPow = function (x, n) {








    const result = getPow(x, Math.abs(n))


    return n<0 ? 1/result : result




    // pow(2,3)=> 2 * 2 * 2
};