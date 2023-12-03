class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size()-1;i++)
        {
            int a= max((abs(points[i][0]-points[i+1][0])),abs(points[i][1]-points[i+1][1]));
            ans=ans+a;
        }
        return ans;
    }
};