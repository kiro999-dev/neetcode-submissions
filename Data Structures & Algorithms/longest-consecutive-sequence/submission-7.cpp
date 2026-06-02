class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if(nums.size()==0)
            return (0);
        unordered_set<int> s(nums.begin(),nums.end());
        int len = 0;
        int max = 1;
       for (int num :s)
       {
            len = 1;
            if(s.find(num-1) == s.end())
            {
                while (s.find(num+len) !=s.end())
                {
                    len++;
                }
            }
            if(max < len)
                max = len;
       }
        return max;
    }
};