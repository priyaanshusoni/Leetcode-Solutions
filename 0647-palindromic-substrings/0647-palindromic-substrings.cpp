class Solution {
public:

bool isPalindrome(string s){
    int i=0;
    int j = s.length()-1;

   while(i<=j){
     if(s[i]!=s[j]){
        return false;
     }
     i++;
     j--;
   }

   return true;


}
    int countSubstrings(string s) {
        int cnt=0;

        for(int i=0;i<s.length();i++){
            string ans = "";
            for(int j=i;j<s.length();j++){
                
                ans+=s[j];
                if(isPalindrome(ans)){
                    cnt++;
                }
            }
        }

        return cnt;

    }
};