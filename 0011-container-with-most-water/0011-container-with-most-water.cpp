class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int i=0,s=0;
        int j=height.size()-1;
        while(i<j)
        {
            int r=0;
            if(height[i]<=height[j])
            {
                r=(j-i)*height[i];
                i++;
            }
            else
            {
                r=(j-i)*height[j];
                j--;
            }
            s=max(s,r);
            if(i==j)
            {
                break;
            }
        }
        return s;
    }
};