class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int l=nums.size();
        int i=0,s=0,max=nums[0];
        int b[l];
        while(i!=l)
        {
            b[i]=nums[i];
            i++;
        }
        sort(b,b+l);
        if(b[l-1]<=0)
        {
            return b[l-1];
        }
        i=0;
        while(i!=l)
        {
            s+=nums[i];
            if(s<0)
            {
                s=0;
            }
            else if(s>max)
            {
                max=s;
            }
            //cout<<max;
            i++;
        }
        //cout<<max;
        return max;
    }
};