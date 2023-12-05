class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> one;
        int ans=0;
        for(int i=0;i<chars.size();i++)
        {
            one[chars[i]]++;
        }
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            map<char,int> two;
            for(int j=0;j<temp.size();j++)
            {
                two[temp[j]]++;
            }
            int flag=0;
            for(auto it = two.begin();it!=two.end();it++)
            {
                char q=it->first;
                if(one.find(q)==one.end())
                {
                    flag=1;
                    break;
                }
                else
                {
                    if(one[q]<it->second)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                ans=ans+temp.size();
            }
        }
        return ans;
    }
};