class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

         int sum=0;
        int maxlen = 0;
        int cnt=0;
        
        map<int,int>mpp;
        mpp[0] = 1;
        
        for(int i=0;i<nums.size();i++){

            sum+=nums[i];


            int rem = sum-k;


            if(mpp.find(rem)!=mpp.end()){
                cnt+=mpp[rem];

            }


            mpp[sum]+=1;
          
        }
        
        
        return cnt;

    }
};