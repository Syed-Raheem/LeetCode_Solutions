class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int c=0;
        map<int,int> p;
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second==1)
                c++;
            p[i->second]++;
        }
        if(c==m.size())
            return false;
        for(auto k=p.begin();k!=p.end();k++)
        {
            if(k->second>1)
                return false;
        }
        return true;
    }
};