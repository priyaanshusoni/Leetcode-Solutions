class Solution {
public:
void generateSubSequence(set<vector<int>>&st , vector<int>temp , vector<int>&nums , int index ,int n){

    if(index==n){
        sort(temp.begin() , temp.end());
        st.insert(temp);
        return;
    }
        generateSubSequence(st , temp , nums , index+1 , n);
        temp.push_back(nums[index]);

         generateSubSequence(st , temp , nums , index+1 , n);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>temp;

        generateSubSequence(st ,temp , nums , 0 , nums.size());

        vector<vector<int>>ans;

        for(auto it : st){
            ans.push_back(it);
        }

        return ans;



    }
};