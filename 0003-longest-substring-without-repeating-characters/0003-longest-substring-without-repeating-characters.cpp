#include<algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 1;
       if(s.length()==0) return 0;
        map<char , int>mpp;

        for(int i=0;i<s.length();i++){
            string ans = "";
            for(int j=i;j<s.length();j++){
                if(mpp.find(s[j])!=mpp.end()){
                  break;
                }
                ans+=s[j];
                mpp[s[j]]=1;
                

            }
            longest = max(longest , (int)ans.length());
            mpp.clear();
            // longest=max(cnt,longest);
          
        }

        return longest;
    }
};