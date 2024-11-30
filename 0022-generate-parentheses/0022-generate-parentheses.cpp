class Solution {
public:
void generateParenthesis(int n , vector<string>&ans , string &temp , int left , int right){
   
if(left==n && right==n){
    ans.push_back(temp);
   
    return;
}
 
 
  if(left<n){
      temp+='(';
       generateParenthesis(n , ans , temp,left+1,right);
       temp.pop_back();
       
  } 
 
 if(right<left && right<n){
          
          temp+=')';
          generateParenthesis(n , ans , temp ,left,right+1);
          temp.pop_back();
 } 


}


    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        

            generateParenthesis(n , ans , temp ,0,0);

            return ans;
    }
};