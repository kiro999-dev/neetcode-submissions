class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)

        for s in strs:
             a = [0] *26
             for ch in s:
                a[ord(ch)-97] +=1
             groups[tuple(a)].append(s)
        return list(groups.values()) 

        