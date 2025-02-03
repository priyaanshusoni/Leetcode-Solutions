class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;

        map<int,int>mpp;

        for(auto it:nums){
            mpp[it]+=1;
            if(mpp[it]> floor(nums.size()/3) ){
                if(ans.size() && ans[0]==it){
                      continue;
                }
              ans.push_back(it);
            } 
            if(ans.size()==2) break;
        }

      


        return ans;



    }
};