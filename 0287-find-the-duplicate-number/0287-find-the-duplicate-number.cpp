class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        map<int,int>mpp;


        for(auto it :nums){
            mpp[it]+=1;
        }

        for(auto it : mpp){
           if(it.second>1){
            return it.first;
           }
        }


        return 0;
    }
        
};