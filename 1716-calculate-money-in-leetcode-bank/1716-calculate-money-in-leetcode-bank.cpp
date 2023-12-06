class Solution {
public:
    int totalMoney(int n) {
        int ans=28;
        if(n<7)
        {
            ans=0;
        }
        int j=1;
        for(int i=1;i<n/7;i++)
        {
            ans=ans+(28 + 7*j);
            j++;
        }
        if(n>=7)
        {
            j=j+1;
        }
        for(int i=1;i<=n%7;i++)
        {
            ans=ans+j;
            j=j+1;
        }
        return ans;
    }
};