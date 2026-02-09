class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        // [3,1,0,7,0,0,4,0,2]    => [  ]
        //      j i              =>  [3,1,7,0,0,0,4,0,2] 

        //               j i            =>  [3,1,7,0,0,0,4,0,2] 

      

   
          int j=-1;

          for(int i=0;i<nums.size();i++) {
            if(nums[i]==0){
                j=i;
                break;
            }

          }



          if(j==-1) return;
          

        for(int i=j+1;i<nums.size();i++) {
             
             if(nums[i]!=nums[j]) {
                // [3 , 4  0 , 7 , 8]
                //         j       i

                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;

             }
        }

    }

};