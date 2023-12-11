class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int m=0;
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it)
        {
            if(m<it->second)
            {
                m=it->second;
                ans=it->first;
            }
            if((m/arr.size())>=0.25)
            {
                break;
            }
        }
        return ans;
    }
};