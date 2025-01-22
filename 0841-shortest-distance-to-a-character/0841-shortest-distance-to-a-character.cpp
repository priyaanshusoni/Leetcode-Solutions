class Solution {
public:
    vector<int> shortestToChar(string s, char c) {


    multimap<char,int>mpp;
      vector<int>ans(s.size(),0);
     for(int i=0;i<s.size();i++){
        if(s[i]==c) {
            mpp.insert({c,i});
        }
     }

      for(int i=0;i<s.size();i++){
        int mini = INT_MAX;
        for(auto it : mpp){
           mini = min(abs(i- it.second) , mini);
        }

        ans[i]=mini;

        
      }

      

      return ans;
    }








};