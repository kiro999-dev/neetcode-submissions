class Solution {
public:
    bool isAnagram(string s, string t) {
        int i = 0;
        int arr[128] = {0};
        while(i <  s.length())
        {
            arr[s[i]]++;
            i++;
        }
        i = 0;
        while(i <  t.length())
        {
            arr[t[i]]--;
            i++;
        }
        i = 0;
         while(i <  128)
        {
           if(arr[i] != 0)
            return (0);
            i++;
        }
        return (1);
    }
};
