class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:

       
        

        current_sum = sum(cardPoints[-k:])

        max_sum = current_sum
       
        for i in range(k):
            current_sum = current_sum + cardPoints[i] - cardPoints[len(cardPoints)-k + i]
            max_sum = max(current_sum , max_sum)


        return max_sum






        