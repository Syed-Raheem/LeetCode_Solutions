class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            auto temp = m.find(target-nums[i]);
            if(temp!=m.end())
                return {i,temp->second};
            m.insert({nums[i],i});
        }
        return {1,1};
    }
};