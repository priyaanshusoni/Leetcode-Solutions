class Solution {
public:

void Allsubsequences(vector<vector<int>>&ans , vector<int>temp , vector<int>nums , int n , int index){

   if(index==n){
    ans.push_back(temp);
    return;
   }

    Allsubsequences(ans , temp , nums , n , index+1); //--->  base case
    temp.push_back(nums[index]);

     Allsubsequences(ans , temp , nums , n , index+1);

}

// [1 ,2 , 3 ] 
// N = > total no of subsets = 2^N 
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>temp;

      int n = nums.size();

      Allsubsequences(ans , temp , nums , n ,0 );


      return ans;
    }
};