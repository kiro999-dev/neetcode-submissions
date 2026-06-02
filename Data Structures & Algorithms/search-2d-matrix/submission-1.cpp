
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int l = 0;
            int n =  matrix[0].size()-1;
            int r = n;
            int m = l+((r-l)/2);

            for(vector<int> row:matrix)
            {
                l = 0;
                r = n;
                m = l+((r-l)/2);
                while(l <= r)
                {
                    if(row[m] > target)
                        r--;
                    else if(row[m] < target)
                        l++;
                    else 
                        return true;
                    m = l+((r-l)/2);
                }
            }
            return false;
        }
    };
    