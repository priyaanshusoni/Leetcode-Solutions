class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char>temp;

        for(int i=s.length()-1;i>=0;i--){
          if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            temp.push_back(s[i]);
          }
        }
        int index=0;
        for(int i=0;i<s.length();i++){
          if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            s[i] = temp[index];
            index++;
          }
        }


        return s;
    }
};