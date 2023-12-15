class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> a;
        vector<string> v;
        for(int i=0;i<paths.size();i++)
        {
            a.push_back(paths[i][0]);
            v.push_back(paths[i][1]);
        }
        for(int i=0;i<v.size();i++)
        {
            auto r= find(a.begin(),a.end(),v[i]);
            if(r==a.end())
                return v[i];
        }
        return "";
    }
};