class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:

        ans = []
        numIndex = 0

        
        for i in range(0,2*len(nums)):
            if(numIndex==len(nums)): numIndex = 0
            ans.append(nums[numIndex])
            numIndex+=1

        
        return ans

       
        


        
        