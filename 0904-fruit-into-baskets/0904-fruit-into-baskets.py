class Solution:
    def totalFruit(self, fruits: List[int]) -> int:

         mp = {}

         left = 0

         maxcnt = 0


         for right in range(len(fruits)):
            fruit_type = fruits[right]

            mp[fruit_type] = mp.get(fruit_type , 0) + 1

            while len(mp)>2:
                removable_fruit_type = fruits[left]
                mp[removable_fruit_type]-=1
                if mp[removable_fruit_type] == 0:
                     del mp[removable_fruit_type]
                
                left+=1
                
            
 
        

            maxcnt = max(right - left + 1 , maxcnt)





         return maxcnt
        