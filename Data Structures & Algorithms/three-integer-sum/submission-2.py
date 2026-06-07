class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        l = 0
        res = []
        tuples = defaultdict(bool)
        nums.sort()
        for i in range(len(nums)):
            l = i + 1
            r = len(nums)-1
            while(l < r):
                if(nums[l] + nums[r] + nums[i] > 0):
                    r-=1
                elif(nums[l] + nums[r] + nums[i] < 0):
                    l+=1
                else:
                    if((nums[i],nums[l],nums[r]) not in tuples):
                        res.append([nums[i],nums[l],nums[r]])
                        tuples[nums[i],nums[l],nums[r]] = True
                    l+=1
                    r-=1    
                
        return res
                    