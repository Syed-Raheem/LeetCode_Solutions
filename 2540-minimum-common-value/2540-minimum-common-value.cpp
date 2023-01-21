class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2)
    {
        map<int,int> mp;
        set<int> s1;
        set<int> s2;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        for(auto &v1 : s1)
        {
            mp[v1]++;
        }
        for(auto &v2 : s2)
        {
            mp[v2]++;
        }
        for(auto &it:mp)
        {
            if(it.second > 1)
            {
                return it.first;
            }
        }
        return -1;
    }
};