class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = [1] * len(nums)
        suffix = [1] * len(nums)
        res = [0] * len(nums)
        for i in range(len(nums)):
            if i != 0:
                prefix[i] = nums[i] * prefix[i-1]
            else:
                prefix[i] = nums[i]
        j = len(nums) - 1
        while j >= 0:
            if j != len(nums) -1:
                suffix[j] = nums[j] * suffix[j+1]
            else:
                suffix[j] = nums[j]
            j-=1
        print(suffix)
        print(prefix)
        for i in range (len(nums)):
            if i!=0 and i != len(nums) -1:
                res [i] = prefix[i-1] * suffix[i+1]
            elif i == 0:
                res[i] = suffix[i+1]
            elif i == len(nums) - 1:
                res[i] = prefix[i-1]
        return res