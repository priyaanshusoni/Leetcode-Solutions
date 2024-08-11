class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index =-1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }

        }

        if(index==-1) {
           reverse(nums.begin(),nums.end());
          

        }


     else{ sort(nums.begin()+index+1 , nums.end());

        for(int i=index+1;i<n;i++){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }


     }

    }

};