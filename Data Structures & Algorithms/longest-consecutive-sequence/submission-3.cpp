class Solution {
    public:
        int longestConsecutive(vector<int>& nums)
        {
            if(nums.size() == 0)
                return(0);
            sort(nums.begin(),nums.end());
            int count = 1;
            int max = 1;
            int i = 1;
            while (i < nums.size() )
            {

                
                if(nums[i] - nums[i-1]  == 1)
                    count++;
                else if(nums[i] - nums[i-1] != 0  )
                {
                    if(max < count)
                        max = count;
                    count = 1;
                }
                i++;
            }
            if(max < count)
            {
                max = count;
            }
            return max;
        }
    };
