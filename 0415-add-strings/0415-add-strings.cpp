class Solution {
public:

string add(string num1 , string num2){
    int carry =0;
    int i = num1.length()-1;
    int j=num2.length()-1;
    string ans="";
    
    while(j<num2.length()){
        int sum = (num1[i] - '0') + (num2[j]-'0') + carry;

       
        carry = sum/10;

        char c = '0'+sum%10; // converting int sum%10 to char 'sum%10'

        ans+=c;

        i--;
        j--;



    }


    while(i<num1.length()){
           int sum = (num1[i] - '0') + carry;
            carry = sum/10;

            char c = '0'+sum%10; // converting int sum%10 to char 'sum%10'

             ans+=c;

              i--;
    
    }



    if(carry){
        ans+='1';
    }


    reverse(ans.begin() ,ans.end());


    return ans;
}















    string addStrings(string num1, string num2) {
    
     if(num1.length() >= num2.length()){
        return add(num1 , num2);
     }

     else{
        return add(num2 , num1);
     }

     
    }
};