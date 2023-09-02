class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string> t(dictionary.begin(), dictionary.end());
        int n = s.size();
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; ++i) 
        {
            a[i] = a[i - 1] + 1;
            for (int j = 0; j < i; ++j) 
            {
                if (t.count(s.substr(j, i - j))) 
                {
                    a[i] = min(a[i], a[j]);
                }
            }
        }
        return a[n];
    }
};