class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:

        counter = 0
        max_counter = 0

        for ele in nums:
            if ele==1: counter+=1
            if ele==0: 
                if(counter > max_counter):
                    max_counter = counter
                counter = 0


        

        if counter > max_counter: return counter

        return max_counter

        