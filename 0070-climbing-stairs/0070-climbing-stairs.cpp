class Solution {
public:
    int climbStairs(int n) {
        // if(n==1)
        // {
        //     return 1;
        // }
        // else if(n==2)
        // {
        //     return 2;
        // }
        // else if(n==3)
        // {
        //     return 3;
        // }
        // else if(n==45)
        // {
        //     return 1836311903;
        // }
        // return climbStairs(n-1)+climbStairs(n-2);
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        for(int i=3;i<n;i++)
        {
            int t=v[i-1]+v[i-2];
            v.push_back(t);
        }
        return v[n-1];
    }
};