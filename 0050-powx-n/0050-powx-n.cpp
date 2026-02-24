class Solution {
public:
    double myPow(double x, int n) {


     
     // using Binary Exponantation 

     long long N = n;


     if(n<0) {
        x = 1/x;
        N = -N;
     }

     if(n==0) {
        return 1;
     }

     double half = myPow(x , floor(N/2));

      if(n%2==0){
        return  half * half;
      }

      else {
        return x * half * half;

        //    return x * myPow(x , floor(n/2)) * myPow(x , floor(n/2));
      }
        
    }
};