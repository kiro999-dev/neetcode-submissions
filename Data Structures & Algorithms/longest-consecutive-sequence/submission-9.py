class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashTb = set(nums)
        l = 0
        maxl = 0
        for num in hashTb:
            if(num -1  not in hashTb):
                l = 1
                while(num + l) in hashTb :
                    l+=1
                maxl = max(l,maxl)
        return maxl
            