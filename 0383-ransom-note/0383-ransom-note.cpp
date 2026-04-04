class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        

        map<char , int>m1;
        map<char,int>m2;


        for(auto it :ransomNote){
            m1[it]+=1;
        }



        for(auto it :magazine){
            m2[it]+=1;
        }




        for(auto it : m1){
           if( m2[it.first] >= it.second) {
            continue;
           }


           return false;
        }



        return true;
    }
};