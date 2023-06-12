// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        for(i=1;i<=n/2;i++)
        {
            if(isBadVersion(i))
            {
                return i;
                break;
            }
        }
        for(i=n/2;i<=n;i++)
        {
            if(isBadVersion(i))
            {
                return i;
                break;
            }
        }
        return i;
    }
};