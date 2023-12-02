class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> t;
        
        for (char ch : chars) {
            t[ch]++;
        }

        int ans = 0;
        for (string word : words) 
        {
            unordered_map<char, int> wordCount;
            for (char ch : word) 
            {
                wordCount[ch]++;
            }
            bool validWord = true;
            for (auto& entry : wordCount) 
            {
                char ch = entry.first;
                int count = entry.second;
                if (t.find(ch) == t.end() || count > t[ch]) 
                {
                    validWord = false;
                    break;
                }
            }
            if (validWord) 
            {
                ans += word.length();
            }
        }
        return ans;
    }
};