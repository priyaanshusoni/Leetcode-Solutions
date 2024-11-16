#include<algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 1;
       if(s.length()==0) return 0;
        map<char , int>mpp;

        for(int i=0;i<s.length();i++){
            int cnt=0;
            for(int j=i;j<s.length();j++){
                if(mpp.find(s[j])!=mpp.end()){
                  break;
                }
                cnt++;
                mpp[s[j]]=1;
                

            }
            longest = max(longest , cnt);
            if(longest==s.length()) break;
            mpp.clear();
            // longest=max(cnt,longest);
          
        }

        return longest;
    }
};