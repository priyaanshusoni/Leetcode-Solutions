class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        map<char,char>mpp;
        map<char,char>mpp2;

        for(int i=0;i<s.size();i++){

            // if(mpp.find(s[i])!=mpp.end()){
            //     if(t[i] != mpp[s[i]]){
            //         return false;
            //     }
            // }

           if(mpp.find(s[i])!=mpp.end() && t[i] != mpp[s[i]]){
            return false;
           }

           if(mpp2.find(t[i])!=mpp2.end() && s[i] != mpp2[t[i]]){
            return false;
           }

           


           



            mpp[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }


        return true;
    }
};