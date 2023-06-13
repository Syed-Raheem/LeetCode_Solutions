class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        map<char,int> mp1;
        for(int i=0;i<ransomNote.size();i++)
        {
            mp[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            mp1[magazine[i]]++;
        }
        // if(mp.size()>mp1.size())
        // {
        //     map<char,int> temp=mp;
        //     mp=mp1;
        //     mp1=temp;
        // }
        for(auto i : mp)
        {
            cout<<i.first<<" "<<i.second<<"\n";
        }
        cout<<"next"<<"\n";
        for(auto i : mp1)
        {
            cout<<i.first<<" "<<i.second;
        }
        for(auto i : mp)
        {
            if(mp1.find(i.first)!=mp1.end())
            {
                int  p = mp1[i.first];
                if(i.second > p)
                    return false;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};