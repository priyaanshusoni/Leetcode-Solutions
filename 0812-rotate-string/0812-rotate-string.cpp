class Solution {
public:

 string rightrotate(string s , int i){
        
          reverse(s.begin(),s.end());
       
          reverse(s.begin()+i,s.end());
        
          reverse(s.begin(),s.begin()+i);



          return s;
  
    }






    bool rotateString(string s, string goal) {

    //     if(s.length()!=goal.length()){
    //         return false;
    //     }

       
    //    string doubled = s+s;

    //   return doubled.find(goal)!=-1;

         int cnt =s.length();

         while(cnt){
         if(s==goal) return true;
          reverse(s.begin()+1 , s.end());
          reverse(s.begin(),s.end());
         
          cnt--;
         }
          


          return false;

       



    }
};