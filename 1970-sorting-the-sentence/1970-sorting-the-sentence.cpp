class Solution {
public:
    string sortSentence(string s) {
        vector<string>order(10,"");
       string temp = "";

        for(int i=0;i<=s.length();i++){
            
            if(s[i]==' '|| i==s.length()){
                    
            int index = temp[temp.size()-1];
            index = index - '0';

            temp.pop_back();

            order[index] = temp;

            temp.clear();
            }
          else{
             temp+=s[i];
          }

        }


        string ans = "";

        for(int i=0;i<10;i++){
            if(order[i]!=""){
                ans+=order[i];
                ans+=" ";
            }
        }

        ans.pop_back();

        return ans;
    }
};