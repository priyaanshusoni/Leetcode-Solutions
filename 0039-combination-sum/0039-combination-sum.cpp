class Solution {
public:

void findAll(vector<vector<int>>&ans , vector<int>temp ,vector<int>candidates, int sum , int index , int n){

 if(sum==0){
    ans.push_back(temp);
    return;
 }

 if(sum<0 || index==n) return;

 findAll(ans,temp,candidates,sum,index+1,n);
 temp.push_back(candidates[index]);
 findAll(ans,temp,candidates,sum-candidates[index],index,n);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;

        vector<int>temp;
        
        int sum=target;

        findAll(ans,temp,candidates,sum,0,candidates.size());



        return ans;

    }
};