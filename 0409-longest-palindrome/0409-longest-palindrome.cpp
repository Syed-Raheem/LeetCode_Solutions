class Solution {
public:
    int longestPalindrome(string s) 
    {
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        int c=0,k=0;
        for(auto i : mp)
        {
            if(i.second%2 == 0)
            {
                c=c+i.second;
            }
            else
            {
                if(i.second>1 && k==0)
                {
                    c=c+i.second;
                    k++;
                }
                else if(i.second==1 && k==0)
                {
                    c=c+1;
                    k++;
                }
                else
                {
                    c=c+(i.second-1);
                }
            }
        }
        return c;
    }
};