class Solution:

    def isPower(self ,n , x):

        if n==x: return True

        if x>=n: return False


        return self.isPower(n , 4 * x)




    def isPowerOfFour(self, n: int) -> bool:

        if n==1: return True

        return self.isPower(n , 4)

        

        
        