class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector <vector<int> > v;
        v.resize(m);
        for (int i = 0; i < v.size(); i++) 
        {
            v[i].resize(n);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) 
            {
                 v[j][i] = matrix[i][j];
            }
        }
        return v;
    }
};