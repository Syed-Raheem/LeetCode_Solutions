class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int a = 0 - (nums[i]);
            int m = i+1,n=nums.size()-1;
            while(m<n)
            {
                if(nums[m]+nums[n]== a)
                {
                    s.insert({nums[i],nums[m],nums[n]});
                    m++;
                    n--;
                }
                else if(nums[m]+nums[n]>a)
                {
                    n--;
                }
                else if(nums[m]+nums[n]<a)
                {
                    m++;
                }
            }
        }
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
};