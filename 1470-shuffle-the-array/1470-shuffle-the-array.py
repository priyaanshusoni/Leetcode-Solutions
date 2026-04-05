class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        index1 = 0
        index2 = n
        ans = []

        while index1 < n and index2 < len(nums):
            ans.append(nums[index1])
            ans.append(nums[index2])
            index1+=1
            index2+=1


        return ans
               


        