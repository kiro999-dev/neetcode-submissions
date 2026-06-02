class Solution {
    public:
        bool isPalindrome(string s) 
        {
            int l = 0;
            int r = s.size()-1;
            while(l!=r && r >=0 && l < s.size())
            {
                
                while(!isalnum(s[l]) && l < s.size())
                    l++;
                while (!isalnum(s[r]) && r >=0)
                    r--;
                if((char)tolower(s[l]) != (char)towlower(s[r]))
                {
                    return false;
                }
               
                l++;
                r--;
            }
            return true;
        }
    };