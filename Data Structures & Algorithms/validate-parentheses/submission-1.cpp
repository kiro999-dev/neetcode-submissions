
class Solution {
    public:
        bool isValid(string s)
        {
            stack <char> stack;
            int i = 0;
            if(s.size() % 2 !=0)
            {
                return false;
            }
            while (s[i])
            {
                if(s[i] == '(' || s[i] == '[' || s[i] =='{')
                {
                    stack.push(s[i]);
                }
                else if(s[i] == ')' || s[i]==']' || s[i] == '}')
                {
                    if(stack.empty())
                        return false;
                    if(s[i]==')' && stack.top() != '(')
                    {
                        return false;
                    }
                    else if(s[i]==']' && stack.top() != '[')
                    {
                        return false;
                    }
                    else if(s[i]=='}' && stack.top() != '{')
                    {
                        return false;
                    }
                    stack.pop();
                }
                i++;
            }
            if(!stack.empty())
                return false;
            return true;
            
        }
    };