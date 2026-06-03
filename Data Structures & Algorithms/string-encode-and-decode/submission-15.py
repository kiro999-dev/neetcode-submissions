class Solution:
    
    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s))+"#"+s
        print(res)
        return res
    def decode(self, s: str) -> List[str]:
        res = []
        l = 0
        i = 0
        while i < len(s):
           j = s.find('#',i)
           l = int(s[i:j])
           content = s[j+1:j+1+l]
           res.append(content)
           i = j + 1 + l
        return res
