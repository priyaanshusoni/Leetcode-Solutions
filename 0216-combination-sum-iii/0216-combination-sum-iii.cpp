class Solution {
public:

void findAll(vector<vector<int>>&ans , vector<int>temp ,vector<int>candidates, int sum , int index , int n,int k){

 if(sum==0 && temp.size()==k){
    ans.push_back(temp);
    return;
 }

 if(sum<0 || index==n || temp.size()>k) return;

 findAll(ans,temp,candidates,sum,index+1,n,k);
 temp.push_back(candidates[index]);
 findAll(ans,temp,candidates,sum-candidates[index],index+1,n,k);

}
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int>arr = {
            1,2,3,4,5,6,7,8,9
        };

        vector<vector<int>>ans;

        vector<int>temp;
        
        int sum=n;

        findAll(ans,temp,arr,sum,0,arr.size(),k);



        return ans;
        
    }
};