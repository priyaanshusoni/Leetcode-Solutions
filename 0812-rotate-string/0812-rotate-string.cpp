class Solution {
public:

 string rightrotate(string a , int i){
        
          reverse(a.begin(),a.end());
       
          reverse(a.begin()+i,a.end());
        
          reverse(a.begin(),a.begin()+i);



          return a;
  
    }






    bool rotateString(string s, string goal) {

        if(s.length()!=goal.length()){
            return false;
        }

       
       string doubled = s+s;

      return doubled.find(goal)!=-1;

       



    }
};