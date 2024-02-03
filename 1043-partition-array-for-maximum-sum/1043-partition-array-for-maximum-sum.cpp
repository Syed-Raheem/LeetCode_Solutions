class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1);
        for (int i = 1; i <= n; ++i) 
        {
            int max_val = 0;
            for (int j = 1; j <= min(k, i); ++j) 
            {
                max_val = max(max_val, arr[i - j]);
                dp[i] = max(dp[i], dp[i - j] + max_val * j);
            }
        }
        return dp[n];
    }
};

// 1 4 1 5 7 3 6 1 9 9 3

// 1 4 1 5 7 9 9 9 9 9 3

// 1 7 7 7 7 9 9 9 9 9 3