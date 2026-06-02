class Solution {
    public:

        string encode(vector<string>& strs) 
        {
            string res = "";
            for (size_t i = 0; i < strs.size(); i++)
            {
                res += to_string(strs[i].length())+"#"+ strs[i]; 
            }
            cout<<res<<endl;
            return res;
        }
        string gen_str(string s,int n)
        {
            string res = "";
            for (size_t i = 0; i < n; i++)
            {
                res += s[i];
            }
    
            return res;            
        }
        vector<string> decode(string s) 
        {
            vector<string> res;
            string str = "";
            int i = 0;
        
            while (i < s.size())
            {
                while (s[i] != '#')
                {
                    str += s[i];
                    i++;
                }
                int read_size = atoi(str.c_str());
                str = ""; 
                i++;
                string gen = s.substr(i, read_size);
                res.push_back(gen);
        
                i += read_size;
            }
            return res;
        }
    };