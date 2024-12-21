class Solution {
public:

void AllSubsequences(vector<vector<int>>&ans , vector<int>temp , vector<int>nums , int n , int index){
if(index>=n){
    ans.push_back(temp);
    return;
}

AllSubsequences(ans , temp , nums, n , index+1);
temp.push_back(nums[index]);
AllSubsequences(ans , temp , nums, n , index+1);


}

    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans;
     int n = nums.size();

     vector<int>temp;

     AllSubsequences(ans , temp ,nums, n , 0);

     return ans;
    }
};