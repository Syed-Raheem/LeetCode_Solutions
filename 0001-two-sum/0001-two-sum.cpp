class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n=nums.size(),k,l;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    k=i;
                    l=j;
                    break;
                }
            }
        }
        return {k, l};
    }
};