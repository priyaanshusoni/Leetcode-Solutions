class Solution:
    def fib(self, n: int) -> int:
        ans = []
        
        ans.append(0)
        ans.append(1)
        ans.append(1)

        first = ans[1]
        second = ans[2]
        for i in range(2,n):
            third = first + second
            ans.append(third)
            first = second
            second = third
        print(ans)
        return ans[n]
   
        
        