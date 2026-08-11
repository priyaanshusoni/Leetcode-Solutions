class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:


        mp = {}

        total = 0

        cnt = 0


        for i in range(len(nums)):

            total+=nums[i]

            if total==goal:
                cnt+=1

            
            if mp.get(total-goal, 0):
                cnt+=mp.get(total-goal,0)
                       
            mp[total] = mp.get(total , 0) + 1


            
        return cnt
            
           

                
        