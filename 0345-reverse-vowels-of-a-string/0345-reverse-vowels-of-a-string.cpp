class Solution {
public:

bool isvowel(char c){
if(c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u'||c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U'){
              return true;
    }

    return false;
}


    string reverseVowels(string s) {
        vector<char>revvow;

        for(int i=0;i<s.length();i++){
            if(isvowel(s[i])){
                revvow.push_back(s[i]);
            }
        }


        reverse(revvow.begin(), revvow.end());
         int index=0;
        for(int i=0;i<s.length();i++){
            if(isvowel(s[i])){
               s[i]=revvow[index];
               index++;
            }
        }


        return s;

    }


};