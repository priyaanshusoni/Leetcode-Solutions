class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        
     
      set<string>st(bannedWords.begin() , bannedWords.end());
      int counter=0;
      for(auto it  :message){
        if(st.find(it)!=st.end()) counter++;
      }

      if(counter>=2) return true;



      return false;
    }
};