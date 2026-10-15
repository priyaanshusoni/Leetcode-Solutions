function isGreaterThanThreshold(currSum, threshold, windowSize) {

    return (currSum / windowSize) >= threshold;

}


function numOfSubarrays(arr, k, threshold) {


    let currSum = 0;

    let cnt = 0;

    let n = arr.length



    for (let i = 0; i < k; i++) {
        currSum += arr[i];

    }

    if (isGreaterThanThreshold(currSum, threshold, k)) cnt++;


    for (let i = k; i < n; i++) {
        currSum += arr[i];
        currSum -= arr[i - k];

        if (isGreaterThanThreshold(currSum, threshold, k)) cnt++;

    }


    return cnt;




};