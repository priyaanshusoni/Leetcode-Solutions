class Solution {
public:

int ls(vector<int>&nums2 , int val) {
     for(int i=0;i<nums2.size();i++){
        if(nums2[i]==val){
            return i;


        }

     }

     return -1; // it will never be returned coz nums 1 is subset of nums2 every element will exist for sure
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
       // first for every element in nums2 we wil search for its index in nums 2
         for(int i=0;i<nums1.size();i++){
            int index = ls(nums2,nums1[i]);

            for(int j=index+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    ans[i]=nums2[j];
                    break;
                }
            }
         }

        return ans;
    }
};