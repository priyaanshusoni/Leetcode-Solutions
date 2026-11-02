class Solution(object):
    def totalFruit(self, str):
        mp = {}

        left = 0

        maxlen = 0

        k = 2



        for right in range(len(str)):

            char = str[right]
            mp[char] = mp.get(char , 0) + 1


            while len(mp) > k:
                leftChar = str[left]
                mp[leftChar]-=1
                if mp[leftChar]==0:
                    del mp[leftChar]
                    

                left+=1

            
            maxlen = max(maxlen , right-left+1)


        

        return maxlen
            