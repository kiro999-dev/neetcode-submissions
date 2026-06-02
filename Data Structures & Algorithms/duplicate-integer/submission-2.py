class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        numbers = {}
        for i in range(len(nums)):
            if nums[i] in numbers:
                return True
            numbers[nums[i]] = True

        return False