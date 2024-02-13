class Solution {
public:
    bool checkpalindrome(string s)
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-(i+1)])
                return 0;            
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(checkpalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};