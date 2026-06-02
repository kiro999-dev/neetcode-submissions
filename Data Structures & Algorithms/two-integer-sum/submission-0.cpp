class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> hash; 
         std::vector<int> res;

         int k;
         int i = 0;
         for(int val : nums)
         {
          
            k = target - val;
            if(hash.find(k)!= hash.end())
            {
                res.push_back(hash[k]);
                res.push_back(i);
                return (res);
            }
            hash[val] = i; 
            i++;
         }
         return(res);
    }
};
