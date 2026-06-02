class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        pair<int, int> p;
        int indx = 0;
        stack<pair<int, int>> s;
        int maxarea = 0;
        int res = 0;
        for (size_t i = 0; i < heights.size(); i++)
        {
            indx = i;
            while (!s.empty() && s.top().first > heights[i])
            {
                res = (s.top().first) * (i - s.top().second);
                indx = s.top().second;
                s.pop();
                maxarea = max(maxarea, res);
            }
            s.push({heights[i], indx});
            res = 0;
        }
        int i = s.size();
        while (!s.empty())
        {
            int index = (s.top().second);
            int h = s.top().first;
            int n = heights.size();
            maxarea = max(maxarea,h* (n-index));
            s.pop();

        }
        return maxarea;
    }
};