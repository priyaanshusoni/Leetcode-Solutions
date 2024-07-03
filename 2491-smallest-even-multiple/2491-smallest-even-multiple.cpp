class Solution {
public:
    int smallestEvenMultiple(int n) {

        if(n==1){
            return 2;
        }

        if(n%2==0 && n%n==0){
            return n;
        }
          int smallest =0;

        for(int i=2;i<=n;i++){
            smallest= n*i;

            if(smallest % n== 0){
                return smallest;
            }
        }


        return -1;
        
    }
};