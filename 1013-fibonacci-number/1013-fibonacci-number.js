/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    var fibo=[];

    fibo.push(0);
    fibo.push(1);
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    for(let i=2;i<=n;i++){
        fibo[i]= fibo[i-1] + fibo[i-2];
        fibo.push(fibo[i]);
    }

    return fibo[n];


};