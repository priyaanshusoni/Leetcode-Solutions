class Solution {
public:

void insertEntry(vector<vector<int>>&ans , char c,string s){

    for(int i=0;i<s.size();i++){

        if(i>0 && s[i] == s[i-1]) continue;
        if(s[i]==c){
            int j=i+1;
            while(s[j]==s[i]){
                j++;
            }
            if((j-1)-i>=2) {
             ans.push_back({i,j-1});
          }

         

           
        }
        
    }
}


    vector<vector<int>> largeGroupPositions(string s) {
        
        map<char , int>mpp;
        vector<vector<int>>ans;

        for(auto it:s){
            mpp[it]++;
        }

   
        
      for(auto it :mpp){
        if(it.second>=3){
            insertEntry(ans ,it.first,s);
        }
        else{
            continue;
        }
      }

        sort(ans.begin() ,  ans.end());
        return ans;
    }
};