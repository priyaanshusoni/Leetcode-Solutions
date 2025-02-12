class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    // [2, 7 , 11, 15]  // map -> [{2,0}, {9,1} , {20,2} , {35,3}]
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
           
            int rem = target - nums[i]; 

            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem] , i };
            }

            mpp[nums[i]] = i;
        }
      
    return { -1, -1};
    }
};