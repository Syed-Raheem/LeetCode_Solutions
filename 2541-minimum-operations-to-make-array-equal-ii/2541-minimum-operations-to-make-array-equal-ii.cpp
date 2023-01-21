class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        long long dec=0;
        long long inc = 0;
        int flag=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]!=nums2[i] && k==0)
            {
                return -1;
            }
            if(nums1[i]!=nums2[i])
            {
                if(nums1[i]>nums2[i])
                {
                    long long ch=nums1[i]-nums2[i];
                    if(ch%k == 0)
                    {
                        dec=dec+ch;
                    }
                    else
                    {
                        return -1;
                    }
                }
                else
                {
                    long long rr=nums2[i]-nums1[i];
                    if(rr%k==0)
                    {
                        inc=inc+rr;
                    }
                    else
                    {
                        return -1;
                    }
                }
                flag=1;
            }
        }
        if(flag==0)
        {
            return 0;
        }
        if(k==0)
        {
            return -1;
        }
        if(dec==inc)
        {
            return dec/k;
        }
        return -1;
    }
};