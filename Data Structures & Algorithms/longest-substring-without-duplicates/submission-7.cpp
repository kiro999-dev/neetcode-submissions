class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.empty())
            return(0);
        int l = 0;
        int r = 0;
        int s_size;
        int max_n = 1;
        unordered_set<char> st;
        while (l <= r && r < s.size())
        {
            if (st.count(s[r]))
            {
                st.erase(s[l]);
                l++;
                
            }
            else
            {
                st.insert(s[r]);
                max_n = max(max_n, r-l+1);
                r++;
            }
          
        }
        return max_n;
    }
};
