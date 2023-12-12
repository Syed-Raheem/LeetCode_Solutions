class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        int n=min(strs[0].size(),strs[1].size());
        string one = strs[0];
        string two = strs[1];
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(one[i]==two[i])
            {
                ans=ans+one[i];
            }
            else
            {
                break;
            }
        }
        if(ans=="")
            return ans;
        for(int i=2;i<strs.size();i++)
        {
            string temp=strs[i];
            string ch="";
            int p=min(ans.size(),temp.size());
            for(int j=0;j<p;j++)
            {
                if(ans[j]==temp[j])
                {
                    ch=ch+ans[j];
                }
                else
                {
                    break;
                }
            }
            ans=ch;
        }
        return ans;
    }
};