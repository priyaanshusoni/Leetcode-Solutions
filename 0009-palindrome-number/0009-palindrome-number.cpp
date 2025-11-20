class Solution {
public:
    bool isPalindrome(int x) {


        if (x<0) return false;

        long long reversedNumber = 0;

         int originalNumber = x;
        while(x!=0) {

            int lastDigit = x % 10;

            reversedNumber = reversedNumber * 10 + lastDigit;

            x = x/10;


        }


         return originalNumber==reversedNumber;
        
    }
};