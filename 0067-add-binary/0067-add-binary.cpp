class Solution {
public:
    string addBinary(string a, string b) 
    {
        int c=0;
        string ans="";
        if(a.size()<b.size())
        {
            string temp=a;
            a=b;
            b=temp;
        }
        int d= a.size()-b.size();
        for(int i=a.size()-1;i>=d;i--)
        {
            if(c==0)
            {
                if((a[i]=='0' && b[(i-d)]=='1') || (a[i]=='1' && b[(i-d)]=='0'))
                {
                    ans=ans+'1';
                    c=0;
                }
                else if((a[i]=='1' && b[(i-d)]=='1'))
                {
                    ans=ans+'0';
                    c=1;
                }
                else
                {
                    ans=ans+'0';
                    c=0;
                }
            }
            else if(c==1)
            {
                if((a[i]=='0' && b[(i-d)]=='1') || (a[i]=='1' && b[(i-d)]=='0'))
                {
                    ans=ans+'0';
                    c=1;
                }
                else if((a[i]=='1' && b[(i-d)]=='1'))
                {
                    ans=ans+'1';
                    c=1;
                }
                else
                {
                    ans=ans+'1';
                    c=0;
                }
            }
        }
        for(int i=d-1;i>=0;i--)
        {
            if(c==1 && a[i]=='0')
            {
                ans=ans+'1';
                c=0;
            }
            else if(c==1 && a[i]=='1')
            {
                ans=ans+'0';
                c=1;
            }
            else if(c==0 && a[i]=='0')
            {
                ans=ans+'0';
                c=0;
            }
            else if(c==0 && a[i]=='1')
            {
                ans=ans+'1';
                c=0;
            }
        }
        cout<<ans;
        if(c==1)
        {
            ans=ans+'1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};