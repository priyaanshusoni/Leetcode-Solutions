class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char>hash(26,0);


        for(int i=0;i<sentence.length();i++){

            int index = sentence[i]-'a';
            hash[index]++;
        }


        for(int i=0;i<hash.size();i++){
            if(hash[i]==0){
                return false;
            }

            else{
                continue;
            }
        }


        return true;
    }
};