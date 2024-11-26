class Solution {
public:


void AllSubSequences(vector<int>&arr, vector<vector<int>>&ans , vector<int>&temp , int index , int n){

if(index==n){
    ans.push_back(temp);
    return;
}

AllSubSequences(arr , ans , temp , index+1 , n);
temp.push_back(arr[index]);
AllSubSequences(arr , ans , temp , index+1 , n);

temp.pop_back();





}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;

         AllSubSequences(nums,ans , temp , 0 , n);


         return ans;
 
    }
};