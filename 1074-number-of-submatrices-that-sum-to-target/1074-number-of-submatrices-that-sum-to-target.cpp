class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,sum=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                ans++;
            }
            if(mp.find(sum-k)!=mp.end())
            {
             ans+=mp[sum-k];  
            }
            mp[sum]++;
        }
        return ans;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
       int ans=0;
        for(int i=0; i<matrix.size(); i++){
			
            vector<int> sum(matrix[0].size(), 0);
            for(int j=i; j<matrix.size(); j++){
                for(int k=0; k<matrix[0].size(); k++){
                    sum[k] += matrix[j][k];
                }
                ans += subarraySum(sum, target);
            }
        }
       
    return ans;
    }
};