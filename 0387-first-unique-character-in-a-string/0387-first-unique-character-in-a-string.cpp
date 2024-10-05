class Solution {
public:

int charindex(char c , string s){
  
   

    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            return i;;
        }
    }

    return -1;
}
    int firstUniqChar(string s) {
         
        vector<int>hash(26,0);
        int mini = INT_MAX;
        for(int i=0;i<s.length();i++){
            int index = s[i]-'a';
            hash[index]++;
        }

        for(int i=0;i<26;i++){
            if(hash[i]==1){
             char ch = i+'a';
             int val = charindex(ch,s);
             mini = min(mini,val);
            }
        }

          if(mini==INT_MAX){
              return -1;
          }
          
        
         return mini;
       
    }
};