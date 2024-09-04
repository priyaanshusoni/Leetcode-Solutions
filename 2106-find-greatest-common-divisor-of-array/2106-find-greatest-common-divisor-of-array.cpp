class Solution {
public:

int gcd(int a , int b){
    if(b==0){
        return a;
    }


    return gcd(b,a%b);
}
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi = max(nums[i], maxi);
            mini = min(nums[i],mini);
        }
          return gcd(mini,maxi);


    }
};