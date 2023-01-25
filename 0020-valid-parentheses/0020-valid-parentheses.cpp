class Solution {
public:
    bool isValid(string s)
    {
        if(s.size()%2!=0)
            return false;
        stack<char> k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]== '[')
            {
                k.push(s[i]);
            }
            else if(k.empty()!=true)
            {
                if(s[i]=='}' )
                {
                    if(k.top()=='{' )
                    {
                        k.pop();
                    }
                    else
                        return false;
                }
                else if(s[i]==')'  )
                {
                    if(k.top()=='(')
                    {
                        k.pop();
                    }
                    else
                        return false;
                }
                else if(s[i]==']')
                {
                    if(k.top()=='[')
                    {
                        k.pop();
                    }
                    else
                        return false;
                }
            }
            else 
                return false;
        }
        if(k.empty())
        {
            return true;
        }
        return false;
    }
};