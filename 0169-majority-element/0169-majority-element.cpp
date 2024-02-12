class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int max=0,ans=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
                ans=it->first;
            }
        }
        return ans;
    }
};