class Solution {
public:



  

    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        int n= nums.size();

      for(int i=0;i<n;i++){
      
              for(int j=i+1;j<=i+(n)-1;j++){
                int index = j%n;

                if(nums[index]>nums[i]){
                    ans[i]=nums[index];
                    break;
                }
              }
      }
              
        return ans;
    }
};