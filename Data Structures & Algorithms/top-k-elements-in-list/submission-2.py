class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = defaultdict(int)
        for i in range(len(nums)):
            counter[nums[i]] +=1
        
       
        return [item[0] for item in sorted(counter.items(), key=lambda item: item[1], reverse=True)][:k]
