/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(cardPoints, k) {


    let n = cardPoints.length
    let sum = 0;
    let max = 0;


    for(let i = n-k ; i<n ; i++){
        sum+=cardPoints[i]
    }
     
     max = sum;

    for(let i=0 ; i<k ; i++){
        sum = sum + cardPoints[i] - cardPoints[n-k + i];
        max = Math.max(sum , max)

    }

    return max
    
};