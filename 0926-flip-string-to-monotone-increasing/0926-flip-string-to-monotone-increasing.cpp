class Solution {
public:
    int minFlipsMonoIncr(string s) 
    {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
        }
        int t=c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                t=min(t,--c);
            }
            else
            {
                c++;
            }
        }
        return t;
    }
};