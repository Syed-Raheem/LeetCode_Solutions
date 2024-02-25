constexpr int maxn = 100000;
vector<int> pd[maxn + 1];

class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        if (pd[2].empty()) {
            for (int i = 2; i <= maxn; i += 1) {
                if (pd[i].empty()) {
                    for (int j = i; j <= maxn; j += i) {
                        pd[j].push_back(i);
                    }
                }
            }
        }
        
        map<int, vector<int>> indexMap;
        int n = nums.size();
        vector<vector<int>> graph(n);
        
        for (int i = 0; i < n; i += 1) {
            for (int primeDivisor : pd[nums[i]]) {
                indexMap[primeDivisor].push_back(i);
            }
        }
        for (auto& [primeDivisor, indices] : indexMap) {
            for (int i = 1; i < indices.size(); i += 1) {
                graph[indices[0]].push_back(indices[i]);
                graph[indices[i]].push_back(indices[0]);
            }
        }
        
        vector<int> visited(n);
        int m = 0; 
        function<void(int)> dfs = [&](int u) {
            if (visited[u]) {
                return;
            }
            m += visited[u] = 1;
            for (int v : graph[u]) {
                dfs(v);
            }
        };
        
        dfs(0); 
        
        return n == m; 
    }
};