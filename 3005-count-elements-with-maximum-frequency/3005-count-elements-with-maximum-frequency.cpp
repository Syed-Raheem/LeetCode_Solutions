class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0}, t=0, ans=0;
        for (int x: nums){
            freq[x]++;
            ans+=(freq[x]==t);
            if (freq[x]> t) ans=1, t=freq[x];
        }
        return ans*t;
    }
};
