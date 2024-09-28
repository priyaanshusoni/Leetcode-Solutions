class Solution {
public:

bool isVowel(char s){
    
        if(s=='a'|| s=='e'||s=='i'|| s=='o'||s=='u'|| s=='A'||s=='E'|| s=='I'||s=='O'||s=='U'){
            return true;
         }
    

    return false;
}
    string sortVowels(string s) {
        vector<char>vowels;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                vowels.push_back(s[i]);
            }
        }
          sort(vowels.begin(),vowels.end());
          int index=0;
        for(int i=0;i<s.size();i++){
           if(isVowel(s[i])){
            s[i] = vowels[index]++;
            index++;
           }
        }

      

    return s;
    }
};