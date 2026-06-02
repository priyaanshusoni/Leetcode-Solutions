function countWays( n , map) {

        if(n===0 || n===1) return 1;

         
        if(map[n]) return map[n];


         

         map[n]= countWays(n-1 , map)  + countWays(n-2 , map);


         return map[n];


}



function climbStairs(n: number): number {





    const map = {};


    return countWays( n , map)







   
    
};