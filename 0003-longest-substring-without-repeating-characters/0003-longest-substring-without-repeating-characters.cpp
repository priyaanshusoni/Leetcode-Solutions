class Solution {
public:


//this function cheks for whether a substring inside a string is unique or not ! 
//    bool isUniqueSubstr(string s){

//      bool isUnique = true;
//      for(int i=0;i<s.length();i++){

//         for(int j=i+1;j<s.length();j++){
//               if(s[j]==s[i]){
//                 isUnique = false;
//                 break;
//               }
//         }
//      }

//      if(isUnique) return true;


//      return false;


//    }
    int lengthOfLongestSubstring(string s) {
        
       unordered_map<char , int>mpp;
        int maxCnt=0;


          for(int i=0;i<s.length();i++){
           
             int cnt=0;
           
            for(int j=i;j<s.length();j++){ 
                if(mpp.empty() || mpp.find(s[j])==mpp.end()){
                     mpp[s[j]] =1;
                       cnt++;
                     maxCnt = max(maxCnt , cnt);
                }
                else{
                   
                    mpp.clear();
                    break;
                }
            }



          }






        



        return maxCnt;



    }
};