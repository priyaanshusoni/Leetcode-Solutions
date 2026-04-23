class Solution {
public:
    bool checkRecord(string s) {

 
        int cntA = 0;
        int cntL = 0;


        for (auto it : s) {
            if ( it == 'A') {
                cntL  = 0;

                cntA++;

                if(cntA >= 2) return false;

            }

            else if (it == 'L') {

                cntL++;

                if(cntL >= 3) return false;

            }

            else {

                cntL = 0;

            }
        }


        return true;
   

    }   
    
};