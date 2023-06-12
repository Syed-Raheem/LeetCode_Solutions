// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int i=1;
        long long int j=n;
        long long int mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(isBadVersion(mid) && isBadVersion(mid-1)!=true)
            {
                return mid;
            }
            else if(isBadVersion(mid))
            {
                j=mid-1;
            }
            else if(isBadVersion(mid)!=true && isBadVersion(mid+1))
            {
                return mid+1;
            }
            else
            {
                i=mid+1;
            }
        }
        return mid;
    }
};