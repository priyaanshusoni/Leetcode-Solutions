class Solution {
public:

int func(vector<int>&nums , int index , int element){
    for(int i=0;i<index;i++){
        if(nums[i]>element){
            return nums[i];
        }

    }


    return -1;
}
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size());


      for(int i=0;i<nums.size();i++){
        int isFound = false;
        int index=-1;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>nums[i]){
                isFound = true;
                 ans[i]=nums[j];
                break;
            }
        }

        if(!isFound){
            int ele = func(nums,i,nums[i]);

            if(ele>=0 || nums[i]!=-1){
                ans[i]=ele;
            }

            else{
                ans[i]=-1;
            }
        }




      
        
      }


        return ans;
    }
};