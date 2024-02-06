class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<string> temp;
        // for(int i=0;i<strs.size();i++)
        // {
        //     sort(strs[i].begin(),strs[i].end());
        //     string q=strs[i];
        //     temp.push_back(q);
        //     cout<<temp[i]<<" ";
        // }
        // sort(temp.begin(),temp.begin());
        // vector<vector<string>> ans;
        // vector<string> c;
        // for(int i=0;i<temp.size();i++)
        // {
        //     c.push_back(temp[i]);
        //     if(temp[i]!=temp[i+1])
        //     {
        //         ans.push_back(c);
        //         c.empty();
        //     }
        // }
        // return ans;
        vector<vector<string>> ans; 
        unordered_map<string, vector<string>> mp;
        
        for(int i = 0; i < strs.size(); i++) 
        {           
            string s = strs[i];                         
            sort(strs[i].begin(), strs[i].end());      
            mp[strs[i]].push_back(s);                 
        }
        for(auto i : mp)                          
            ans.push_back(i.second);
        
        return ans;   
        
    }
};

