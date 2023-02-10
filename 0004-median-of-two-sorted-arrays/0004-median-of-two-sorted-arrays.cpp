class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        double d;
        if(v.size()%2!=0)
        {
            int k1= floor(v.size()/2);
            double k=v[k1];
            d=k;
        }
        else
        {
            int j=v.size()/2;
            double p=v[j-1]+v[j];
            double j1=p/2;
            double p1=j1;
            d=j1;
        }
        return d;
    }
};