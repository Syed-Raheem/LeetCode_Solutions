class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() ;
        int i = 0 ;
        int l = 0 ;
        int h = 0 ;
        while(i < n)
        {
            while(i < n-1 && s[i+1] != ' ')
            {
                i++ ;
            }
            h = i ;
            while(l < h)
            {
                swap(s[l],s[h]);
                l++ ;
                h-- ;
            } 
            i = i + 2 ;
            l = i ;
        }
        return s ;
    }
};