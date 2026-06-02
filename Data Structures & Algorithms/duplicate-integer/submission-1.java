class Solution {
    public boolean hasDuplicate(int[] nums) {
     Hashtable<Integer, Integer> o = new Hashtable<>();

        for(int c : nums)
        {
            if(o.containsKey(c))
                return true;
            o.put(c,c);
        }
        return false;
    }
    
}