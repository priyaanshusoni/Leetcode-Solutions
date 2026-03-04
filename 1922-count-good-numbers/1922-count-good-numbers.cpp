class Solution {
public:

     int MOD = 1e9+7;
    int countGoodNumbers(long long n) {


   // [ 0 , 2 ,4 ,6 ,8] => 5 options 
   // [ 1 , 3 ,5 ,7] =? 4 options 

   // Total good numbers of length n => 

    long long evenPositions = (n+1)/2;
    long long oddPositions =  n/2;




    long long evenWays = calcPow(5 , evenPositions);
    long long oddWays = calcPow(4 , oddPositions);



    return (evenWays * oddWays) % MOD;
   
    
     





    }

    long calcPow(long base  , long power) {



         if(power ==0) {
            return 1;
         }

        if(power == 1) {
            return base;
        }

        long long half =  calcPow(base , floor(power/2));


        long long result = (half * half) % MOD;


        return power % 2 == 0 ?  result : (base * result)%MOD;

    }

};