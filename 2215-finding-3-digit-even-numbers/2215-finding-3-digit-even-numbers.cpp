class Solution {
public:

 
    vector<int> findEvenNumbers(vector<int>& digits) {
        
         unordered_set<int>st;
         int n = digits.size();
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j || j==k || i==k){
                        continue;
                    }

                    int sum = digits[i]*100 + digits[j]*10 + digits[k];
                    if(sum%2==0 && sum>=100) st.insert(sum);
                }
            }
         }

         vector<int>ans(st.begin() , st.end());
         sort(ans.begin() , ans.end());


         return ans;
      
    }
};