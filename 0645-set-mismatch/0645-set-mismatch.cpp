class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

       map<int , int>mpp;
       int dup = -1;
       int missing = -1;

       for (auto it : nums) {
        mpp[it]+=1;
       }


       for(int i=1 ;i<=nums.size();i++){
        if(mpp[i]==2) {
            dup = i;
        }
        else if (!mpp[i]) {
            missing = i;
        }
       }




       



       return {dup , missing};



        
    }
};