class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int c=0,t=0;
        for(int i=0;i<g.size();i++)
        {
            for(int j=t;j<s.size();j++)
            {
                if(s[j]>=g[i])
                {
                    c++;
                    t=j+1;
                    break;
                }
            }
        }
        return c;
    }
};