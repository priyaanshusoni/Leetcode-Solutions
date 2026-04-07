class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
                       

                       map<int , int>mpp;

                       vector<int>sorted = nums;
                       vector<int>ans;
                       sort(sorted.begin() , sorted.end());



                       for(int i = nums.size()-1 ; i>=0 ; i--){
                        mpp[sorted[i]] = i;
                       }

                       

                       for(int i=0 ; i<nums.size();i++){
                        ans.push_back(mpp[nums[i]]);
                       }


                       return ans;










    }
};