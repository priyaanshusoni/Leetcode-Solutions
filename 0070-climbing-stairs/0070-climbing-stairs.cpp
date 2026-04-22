class Solution {
public:

      map<int , int>memo;

    int countWays( int n) {


        if(n==0) return 1;


        if(n<0) return 0;



     if(memo[n]) return memo[n];
        


        memo[n] =   countWays(n-1) + countWays(n-2);





      
        return memo[n];

    }



    int climbStairs(int n) {


        if(n<=3) {
            return n;
        }


       





       return countWays(n);

     






    }
       
    
};