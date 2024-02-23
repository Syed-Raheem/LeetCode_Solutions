class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> ans(n, INT_MAX);
        ans[src] = 0;
        for(int i=0; i<k+1; i++) {
            vector<int> tempCost = ans;
            for(auto &it : flights) {
                int s = it[0], d = it[1], c = it[2];
                if(ans[s] == INT_MAX) continue;
                if(ans[s] + c < tempCost[d]) tempCost[d] = ans[s] + c;
            }
            ans = tempCost;
        }
        if(ans[dst] == INT_MAX) return -1;
        return ans[dst];
    }
};