class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        vector<int> v;
        while(x!=0)
        {
            int t= x%10;
            v.push_back(t);
            x=x/10;
        }
        int k=v.size()-1;
        for(int i=0;i<v.size()/2;i++)
        {
            if(v[i]!=v[k])
            {
                return false;
            }
            k--;
        }
        return true;
    }
};