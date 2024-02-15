class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long c = 0, sides = n;
        
        for(int i=0;i<nums.size();i++)
        {
            c=c+nums[i];
        }
        
        for(int i=n-1; i>=2; i--){
            if(c <= 2*nums[i]){
                c -= nums[i];
                sides--;
            }
            else break;
        }
        
        if(sides == 2) 
            return -1;
        return c;
    }
};