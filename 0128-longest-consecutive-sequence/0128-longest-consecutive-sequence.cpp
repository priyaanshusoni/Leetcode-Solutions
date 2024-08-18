class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }

        int cnt=1;
        int longest=1;

      sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++){
             if(nums[i+1]==nums[i]){
                continue;
             }

             else if(nums[i+1]==nums[i]+1){
                cnt++;
                longest=max(cnt,longest);
             }

             else{
                cnt=1;
             }

             

       }

        return longest;
    }
};