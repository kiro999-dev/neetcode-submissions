class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashTable;
        
       
        for (int value : nums) {
            
            auto it = hashTable.find(value);
            if (it != hashTable.end()) {
               
                return true;
            }
            
            hashTable[value] = 1;
        }
        return false;
    }
};