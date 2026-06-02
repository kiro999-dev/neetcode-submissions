
class Solution {
    public:
        int checkleft(int indx,int n,vector<int> &h,int curr)
        {
            indx--;
            int res = 0;
            if(indx < 0 || indx >= n)
                return 0;
            while (indx >= 0)
            {
                if(curr <= h[indx])
                    res += curr;
                else
                    break;
                indx--;
            }
            return res;
        }
        int checkright(int indx,int n,vector<int> &h,int curr)
        {
            
            int res = 0;
            int minarea = 0;
            if(indx >= n)
                return 0;
            while (indx  < n)
            {

                if(curr <= h[indx])
                {
                    res +=curr;
                }
                else
                    break;
                indx++;
            }
            return res;
        }
        int largestRectangleArea(vector<int>& heights)
        {
            int left = 0;
            int right = 0;
            int res = 0;
            int maxarea = 0;
            for (size_t i = 0; i < heights.size(); i++)
            {
                left = checkleft(i,heights.size(),heights,heights[i]);
                right= checkright(i,heights.size(),heights,heights[i]);
                res = left + right;
                if(left == 0 && right ==0)
                    res = heights[i];
                maxarea = max(maxarea,res);
            }
            return maxarea;
        }
    };
