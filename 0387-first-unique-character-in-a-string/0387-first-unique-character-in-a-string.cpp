class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it= mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
            {
                temp=temp+it->first;
            }
        }
        if(temp.size()==0)
            return -1;
        for(int i=0;i<s.size();i++)
        {
            int t=temp.find(s[i]);
            if(t!=string::npos)
                return i;
        }
        return -1;
        
    }
};