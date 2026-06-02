class Solution
{
public:
    int trap(vector<int> &height)
    {
       int l = 0;
       int r = height.size()-1;
       int maxlift = height[l];
       int maxright = height[r];
       int res = 0;
       while (l < r)
       {
        if(maxlift < maxright)
        {
            l++;
            maxlift = max(maxlift,height[l]);
            res += maxlift - height[l];
        }
        else 
        {
            r--;
            maxright = max(maxright,height[r]);
            res +=maxright-height[r];
        }
       }
       return res;
    }
};