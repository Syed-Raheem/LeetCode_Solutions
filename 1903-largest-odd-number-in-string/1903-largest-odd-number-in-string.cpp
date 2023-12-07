class Solution {
public:
    string largestOddNumber(string num) {
        int j=-1;
        string ans="";
        for(int i=num.size()-1;i>=0;i--)
        {
            int t=num[i]-'0';
            if(t%2!=0)
            {
                j=i;
                break;
            }
        }
        if(j>=0)
        {
            ans=num.substr(0,j+1);
        }
        return ans;
    }
};