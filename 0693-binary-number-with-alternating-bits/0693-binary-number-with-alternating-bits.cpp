class Solution {
public:
    bool hasAlternatingBits(int n) {

        string binary = "";

        int decimal = n;

        while(decimal > 0) {

            int bit = decimal % 2;

            binary = binary + to_string(bit);

            decimal = decimal / 2;
        }


        for(int i=1;i<binary.size();i++){
            if(binary[i]==binary[i-1]) {
                return false;
            }
            
        }





        return true;
        
    }
};