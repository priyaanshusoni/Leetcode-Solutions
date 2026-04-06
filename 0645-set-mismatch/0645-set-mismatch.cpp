class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int dup = -1;
        int missing = -1;



        for(int i = 1 ; i<=nums.size();i++){
               int cnt = 0;

            for(int j = 0 ; j<nums.size();j++) {

            

                if(nums[j]==i) {

              
                    cnt++;


                              if(cnt == 2) {
                    dup = nums[j];
                }
                }


            }


            if(cnt == 0) {
                missing = i;
            }

        }




        return { dup , missing};




        
    }
};