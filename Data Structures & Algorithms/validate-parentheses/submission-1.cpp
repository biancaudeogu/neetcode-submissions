
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> open;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                open.push(s[i]);
            }
            else if(s[i] == '}' || s[i] == ']' || s[i] == ')')
            {
                if(open.size() == 0)
                {
                    return false;
                }
                if((open.top() == '[' && s[i] == ']') || (open.top() == '(' && s[i] == ')') || (open.top() == '{' && s[i] == '}'))
                {
                    open.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return open.size() == 0;
    }
};
