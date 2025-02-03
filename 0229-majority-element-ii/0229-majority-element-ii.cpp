class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;

        map<int,int>mpp;

        for(auto it:nums){
            mpp[it]+=1;
        }

        for(auto it:mpp){
            if(it.second > floor(nums.size()/3)) ans.push_back(it.first);
        }


        return ans;



    }
};