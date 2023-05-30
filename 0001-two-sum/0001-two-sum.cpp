class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int j = nums.size()-1,i=0,p,q;
        vector<int> v;
        vector<int> temp=nums;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            if(nums[i]+nums[j]==target)
            {
                p=nums[i];
                q=nums[j];
                break;
            }
            else if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==p || temp[i]==q)
            {
                v.push_back(i);
            }
            if(v.size()==2)
            {
                return v;
            }
        }
        return v;
    }
};