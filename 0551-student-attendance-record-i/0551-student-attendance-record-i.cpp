class Solution {
public:
    bool checkRecord(string s) {

        int cntL = 0;
        int cntA = 0;
        int maxcntL = 0;


        int i = 0;



        while(i<s.size()) {

            if(s[i]=='A') {

                 cntA++;
                 i++;


            }


           else if(s[i]=='L') {


                


                while(i<s.size() && s[i]=='L') {
                    cntL++;
                    i++;
                }

                maxcntL = max(cntL , maxcntL);
                cntL=0;
            }




            else {
                i++;
            }

          
        
        
        
        
        
        
        
        }







           if(maxcntL < 3 && cntA < 2) return true;
 




        return false;





     
      


        
  



       
        

    }   
    
};