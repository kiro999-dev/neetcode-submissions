class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashTable = {}
        k = 0
        for i in range(len(nums)):
            k =  target - nums[i]
            if k in hashTable :
                return [hashTable[k],i]

            hashTable[nums[i]] = i
        return []