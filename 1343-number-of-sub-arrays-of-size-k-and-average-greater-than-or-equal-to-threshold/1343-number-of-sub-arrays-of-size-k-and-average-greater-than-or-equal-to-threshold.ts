function isGreaterThanThreshold(currSum: number, threshold: number, windowSize: number): boolean {

    return (currSum / windowSize) >= threshold;

}


function numOfSubarrays(arr: number[], k: number, threshold: number): number {


    let currSum: number = 0;

    let cnt: number = 0;

    let n: number = arr.length



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