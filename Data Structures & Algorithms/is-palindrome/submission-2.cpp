class Solution {
    public:
        bool isPalindrome(string s) 
        {
            int l = 0;
            int r = s.size()-1;
            while(l!=r && r >=0 && l < s.size())
            {
                
                while( l < s.size() &&  !isalnum(s[l]))
                    l++;
                while ( r >=0 && !isalnum(s[r]))
                    r--;
                if(r >=0 && l < s.size() && (char)tolower(s[l]) != (char)towlower(s[r]))
                {
                    return false;
                }
                l++;
                r--;
            }
            return true;
        }
    };