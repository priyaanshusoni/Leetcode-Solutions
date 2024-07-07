class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi =0;

        int mul = 1;

       

        int n = nums.size();

       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mul = (nums[i]-1) * (nums[j]-1);

            if(mul>maxi){
                maxi = mul;
            }
          }
       }



       return maxi;
    }
};
