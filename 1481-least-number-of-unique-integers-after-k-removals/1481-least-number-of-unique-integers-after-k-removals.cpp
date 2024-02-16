class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
//         int ans=0;
//         map<int,int> mp;
//         for(int i=0;i<arr.size();i++)
//         {
//             mp[arr[i]]++;
//         }
//         vector<int> v;
//         for(auto it=mp.begin();it!=mp.end();it++)
//         {
//             //cout<<it->first<<" "<<it->second<<"\n";
//             v.push_back(it->second);
//         }
//         sort(v.begin(),v.end());
//         for(int i=0;i<v.size();i++)
//         {
//             cout<<v[i];
//             if(k>v[i])
//             {
//                 v[i]=v[i]-1;
//                 k--;
//             }
//             else
//             {
//                 v[i]=v[i]-k;
//             }
//         }
        
//         for(int i=0;i<v.size();i++)
//         {
//             ans=ans+v[i];
//         }
//         return ans;
            unordered_map<int, int> mp;
            for (auto i : arr) {
                mp[i]++;
            }
            int n = mp.size();
            vector<pair<int, int>> temp(n);
            int j = 0;
            for (auto i : mp) {
                temp[j].first = i.second;
                temp[j].second = i.first;
                j++;
            }

            sort(temp.begin(), temp.end());

            j = 0;
            int ans = temp.size();
            while (k > 0) {
                while (temp[j].first > 0 && k > 0) {
                    temp[j].first--;
                    k--;
                }
                if (temp[j].first == 0) {
                    j++;
                    ans--;
                }
            }
            return ans;
    }
};