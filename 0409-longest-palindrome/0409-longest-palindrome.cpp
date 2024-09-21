class Solution {
public:
    int longestPalindrome(string s) {
        int cnt=0;
        bool isOddFound = false;
        vector<int>lower(26,0);
        vector<int>upper(26,0);


        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                int index = s[i]-'a';
                lower[index]++;
            }
            if(s[i]>='A' && s[i]<='Z'){
            int index = s[i]-'A';
                upper[index]++;
            }
        }



        for(int i=0;i<26;i++){
            if(lower[i]%2==0){
                cnt+=lower[i];
            }

            else {
                if (lower[i]%2!=0){
                cnt+=(lower[i]-1);
                isOddFound = true;
            }
            }
            if(upper[i]%2==0){
                cnt+=upper[i];
            }
            else{
                if(upper[i]%2!=0){
                    cnt+=(upper[i]-1);
                    isOddFound = true;
                }
            }
        }


        if(isOddFound){
            return cnt+1;
        }


        return cnt;
    }
};