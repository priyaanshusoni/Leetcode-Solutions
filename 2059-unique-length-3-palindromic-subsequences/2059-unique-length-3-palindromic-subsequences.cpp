class Solution {
public:

void Subsequences(string s , set<string>&ans , string&temp , int n , int index){


    if(index==n){
     if(temp.length()==3 && temp[0]==temp[2])   ans.insert(temp);
        return;
    }


    Subsequences(s ,ans ,temp ,  n , index+1);
    temp.push_back(s[index]);
    Subsequences(s ,ans ,temp ,  n , index+1);
   


}


    int countPalindromicSubsequence(string s) {
        set<char>st1;
        int ans=0;


        for(int i=0;i<s.size();i++){
            st1.insert(s[i]);
        }
         
     
        for(auto it : st1){
           
           int i=-1;
         int j=0;
           for(int k=0;k<s.size();k++){
            if(s[k]==it){
           if(i==-1)  i=k;

              j=k;
            }

           
           }


           set<char>st2;
           for(int index = i+1;index<j;index++){
              st2.insert(s[index]);
           }

           ans+=st2.size();
        }

           return ans;


    }


        
};